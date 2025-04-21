#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
node_t *createnode(LType val)
{
    node_t *head = (node_t *)malloc(sizeof(node_t));
    head->val = val;
    head->next = NULL;
    return head;
}
void addAfter(node_t *position,LType value){
    node_t *new = createnode(value);
    new->next = position->next;
    position->next = new;
}
void addEnd(node_t *headptr,LType value){
    node_t *temp = headptr;
    node_t *new = createnode(value);
    if(temp==NULL){
        temp->next=new;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new;
}
node_t *addBeginning(node_t *headptr,LType value){
    node_t *new = createnode(value);
    new->next = headptr;
    return new;
}
void displayList(node_t *headptr){
    node_t *temp = headptr;
    
    if(temp==NULL){
        printf("The list is empty!\n");
        return;
    }
    while(temp!=NULL){
        printf("%d-->",temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

