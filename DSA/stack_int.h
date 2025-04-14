#ifndef STACK_INT_H
#define STACK_INT_H
//MACROS
#define STACK_SIZE 5

typedef int SType;

typedef struct stack_int 
{
    int data[STACK_SIZE];
    int top;
}stack_t;

//Functions
void init_Stack(stack_t *stack);
int isEmpty(stack_t *stack);
int isFull(stack_t *stack);
void push(stack_t *stack, SType item);
int pop(stack_t *stack);
void displayStack(stack_t stack);
#endif
