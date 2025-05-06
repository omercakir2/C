#include <stdio.h>
#include <stdlib.h>
typedef int BType;
typedef struct node
{
    BType data;
    struct node *left;
    struct node *right;
} bnode_t;
bnode_t *getnode(BType data)
{
    bnode_t *node = (bnode_t *)malloc(sizeof(bnode_t));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bnode_t *search(bnode_t *root, BType data)
{
    while (root != NULL && root->data != data)
    {
        if (data < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return root;
}
bnode_t *insert(bnode_t *root, BType data)
{
    bnode_t *node = getnode(data);

    if (root == NULL)
    {
        root = node;
        return root;
    }
    bnode_t *temp = root;
    while (temp != NULL && temp->data != data)
    {
        if (data < temp->data)
        {
            if (temp->left == NULL)
            {

                temp->left = node; // insert
            }
            else
            {
                temp = temp->left;
            }
        }
        else if (data > temp->data)
        {
            if (temp->right == NULL)
            {

                temp->right = node; // insert
            }
            else
            {
                temp = temp->right;
            }
        }
    }
    return root;
}
void displayBTree(bnode_t *root)
{
    if (root == NULL)
    {
        printf("Tree is empty!\n");
        return;
    }
    else
    {
        printf("Root:%d",root->data);
        if (root->left == NULL)
        {
            printf("Left :NULL");
        }
        else
        {
            printf("Left : %d\n", root->left->data);
        }
        if (root->right == NULL)
        {
            printf("Right :NULL");
        }
        else
        {
            printf("Right : %d\n", root->right->data);
        }
        displayBTree(root->left);
        displayBTree(root->right);
    }
}
void printTree(bnode_t* root, int space) {
    if (root == NULL)
        return;

    
    space += 5;

    
    printTree(root->right, space);

    
    for (int i = 5; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    
    printTree(root->left, space);
}
int main(void)
{
    bnode_t *root = NULL;
    int num;
    printf("Enter a number to insert the tree:");
    scanf("%d", &num);
    while (num > 0)
    {
        root = insert(root, num);
        printf("Enter a number to insert the tree:");
        scanf("%d", &num);
    }
    //displayBTree(root);
    printTree(root,0);
}