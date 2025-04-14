#include "stack_int.h"
#include <stdio.h>

int main(void){
    stack_t mystack;
    init_Stack(&mystack);

    push(&mystack,1);
    push(&mystack,9);
    push(&mystack,0);
    push(&mystack,5);
    
    displayStack(mystack);

    pop(&mystack);

    displayStack(mystack);

    
}