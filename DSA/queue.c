#include "queue_int.h"
#include <stdio.h>

int main(void){
    queue_t q;
    initQ(&q);

    displayQ(q);

    insertQ(&q,1);
    insertQ(&q,9);
    insertQ(&q,0);
    insertQ(&q,5);

    displayQ(q);

    removeQ(&q);
    displayQ(q);

    removeQ(&q);
    displayQ(q);
    

}