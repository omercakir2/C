//
// Circular Queue Implementation
//
#ifndef QUEUE_INT_H
#define	QUEUE_INT_H

#define QUEUE_SIZE  100

typedef  int  QType;

// Queue structure for integers
typedef struct Queue
{	int front, rear;
	QType data[QUEUE_SIZE];
	int counter;
} queue_t;


//Initializing the queue; setting front,rear and counter starting values
void initQ (queue_t *q);
int isEmptyQ (queue_t *q);
int isFullQ (queue_t *q);
int insertQ (queue_t *q, QType item);
QType removeQ (queue_t *q);
void displayQ(queue_t q);
#endif
