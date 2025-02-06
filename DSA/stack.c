/*
    Implementing the stack data structure using array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
    int top;               // Shows the index of the top element(-1 if empty)
    unsigned int capacity; // Stack size
    int *array;
};
struct Stack *createStack(unsigned int capacity)
{
    struct Stack* stack = (struct Stack*)(malloc(sizeof(struct Stack)));
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)(malloc(sizeof(int)*stack->capacity));
    return stack;
}
int isFull(struct Stack* stack){
    return stack->top==stack->capacity-1;
}
int isEmpty(struct Stack* stack){
    return stack->top==-1;
}
void push(struct Stack* stack,int item){//add
    if(isFull(stack))return;
    stack->array[++(stack->top)]=item;
    printf("%d pushed to stack\n",item);
}
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN;  // If stack is empty, return INT_MIN as an error value
    return stack->array[stack->top--];  // Return the top element and decrement top
}  
int peek(struct Stack* stack){
    if(isEmpty(stack))return INT_MIN;
    return stack->array[stack->top];
}
int main(void){
    struct Stack* stack;
    stack = createStack(50);

    push(stack,5);
    push(stack,10);
    push(stack,15);
    push(stack,20);

    printf("The capacity of this stack is : %d\n",stack->capacity);
    printf("The top element is %d\n",stack->top);

    return 0;
}