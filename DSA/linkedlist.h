#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef int LType;

typedef struct Node
{
    LType val;
    struct Node *next;
} node_t;

node_t *createnode(LType val);
void addAfter(node_t *position,LType value);
void addEnd(node_t *headptr,LType value);
node_t *addBeginning(node_t *headptr,LType value);
void displayList(node_t *headptr);
#endif