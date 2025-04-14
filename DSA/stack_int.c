#include "stack_int.h"
#include <stdio.h>

int EMPTY = -987654321;

void init_Stack(stack_t *stack)
{
    for (int i = 0; i < STACK_SIZE; i++)
        stack->data[i] = EMPTY;
    stack->top = -1;
}
int isEmpty(stack_t *stack)
{
    return stack->top == -1;
}
int isFull(stack_t *stack)
{
    return stack->top == STACK_SIZE - 1;
}

void push(stack_t *stack, SType item)
{
    if (!isFull(stack))
    {
        stack->data[++(stack->top)]= item;
    }
}
SType pop(stack_t *stack)
{
    if (!isEmpty(stack))
    {
        return stack->data[(stack->top)--];
    }
    return EMPTY;
}
void displayStack(stack_t stack)
{
    if (isEmpty(&stack))
    {
        printf("The stack is empty!\n");
        return;
    }
    printf("Stack has %d elements as below :\n", (stack.top) + 1);
    
    while (!isEmpty(&stack))
    {
        printf("%d ", pop(&stack));
    }
    printf("\n");
    
}