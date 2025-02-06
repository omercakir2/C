#include <stdio.h>
#include <stdlib.h>

struct node // Integer node
{
    int val;
    struct node *next;
};

// Function to create a new node
struct node *create_node(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

// Function to insert at the front
struct node *insert_front(struct node *head, int val)
{
    struct node *new_node = create_node(val);
    new_node->next = head;  // Point new node to old head
    return new_node;        // New node becomes the new head
}

// Function to insert at the end
struct node *insert_end(struct node *head, int val)
{
    struct node *new_node = create_node(val);
    if (head == NULL)
        return new_node;

    struct node *curr = head; // To keep head unchanged
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    return head;
}

// Function to print the linked list
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf(" %d", node->val);
        node = node->next;
    }
    printf("\n");  // Newline for better output formatting
}

int main(void)
{
    struct node *head = create_node(5);
    head = insert_front(head, 10);
    head = insert_end(head, 15);
    
    printList(head); // Output: 10 5 15
    return 0;
}
