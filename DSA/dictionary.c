#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TABLESIZE 100
typedef int LType;
typedef struct
{
    LType key;
    int val;
} entry_t;
typedef struct Node
{
    entry_t entry;
    struct Node *next;
} node_t;
// FUNCTIONS
node_t *getnode(void);
void initNode(node_t *node);
node_t *search(node_t *headptr, LType target);
node_t *addBeginning(node_t *headptr, LType key);
void addEnd(node_t *headptr, LType key);
void displayTheTable(node_t **table, int size);
int hash(LType val);
node_t **map(node_t **table, LType *arr, int len);

int main(void)
{
    node_t **table = (node_t **)malloc(sizeof(node_t *) * TABLESIZE);
    for (int i = 0; i < TABLESIZE; i++)
    {
        table[i] = NULL;
    }

    LType arr[] = {1, 1, 2, 3, 3, 4, 5, 6, 7, 8, -12, -12, 12, 14, 27, 41, 99, 90, 101, 101, 101};
    int len = sizeof(arr) / sizeof(int);
    table = map(table, arr, len);
    displayTheTable(table, TABLESIZE);
    return 0;
}
node_t *getnode(void)
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->next = NULL;
    return node;
}
void initNode(node_t *node)
{
    node->next = NULL;
    node->entry.val = 0;
}
node_t *search(node_t *headptr, LType target)
{
    if (headptr == NULL)
    {
        printf("The list is empty!");
        return headptr;
    }
    else
    {
        node_t *temp = headptr;
        while (temp != NULL && temp->entry.key != target)
        {
            temp = temp->next;
        }
        return temp;
    }
}
node_t *addBeginning(node_t *headptr, LType key)
{
    node_t *new = getnode();
    initNode(new);
    new->entry.key = key;
    new->entry.val += 1;
    new->next = headptr;
    return new;
}
void addEnd(node_t *headptr, LType key)
{
    node_t *temp = headptr;
    node_t *new = getnode();
    initNode(new);
    new->entry.key = key;
    new->entry.val += 1;
    if (temp == NULL)
    {
        temp->next = new;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
}
void displayTheTable(node_t **table, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (table[i] != NULL)
        {
            printf("[%dth index]->", i);
            while (table[i] != NULL)
            {
                printf("%d[%d]->", table[i]->entry.key, table[i]->entry.val);
                table[i] = table[i]->next;
            }
            printf("NULL\n");
        }
    }
}
int hash(LType val)
{
    return abs(val) % TABLESIZE;
}
node_t **map(node_t **table, LType *arr, int len)
{
    int index;
    for (int i = 0; i < len; i++)
    {
        index = hash(arr[i]);
        if (table[index] == NULL) // If there is no element in the list
        {
            table[index] = addBeginning(table[index], arr[i]);
        }
        else
        {
            node_t *found = search(table[index], arr[i]);
            if (found == NULL)
            {
                table[index] = addBeginning(table[index], arr[i]);
            }
            else
            {
                found->entry.val += 1;
            }
        }
    }
    return table;
}
