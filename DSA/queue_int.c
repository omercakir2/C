#include "queue_int.h"
#include <stdio.h>

QType  QUEUE_EMPTY = -987654321;

void initQ(queue_t *q)
{
    q->front = 0;
    q->rear = -1;
    q->counter = 0;
}
int isEmptyQ(queue_t *q)
{
    return q->counter==0;
}
int isFullQ(queue_t *q)
{
    return q->counter==QUEUE_SIZE;//q->front == (q->rear + 1) % QUEUE_SIZE;
}
int insertQ(queue_t *q, QType item)
{
    if (!isFullQ(q))
    {
        q->rear = (q->rear + 1) % QUEUE_SIZE;
        q->data[q->rear] = item;
        q->counter++;
        return 1; // means succesfull
    }
    printf("The queue is full!\n");
    return -1;
}
QType removeQ(queue_t *q)
{
    if (!isEmptyQ(q))
    {
        int res = q->data[q->front];
        q->front++;
        q->counter--;
        return res;
    }
    return QUEUE_EMPTY;
}
void displayQ(queue_t q)
{
    if (isEmptyQ(&q))
    {
        printf("The queue is empty!\n");
        return;
    }
    printf("There are %d element int the queue:\n", q.counter);
    while (!isEmptyQ(&q))
    {
        printf("%d ", removeQ(&q));
    }
    printf("\n");
}