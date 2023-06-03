#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    size_t head;
    size_t tail;
    size_t size;
    size_t element_size;
    bool empty;
    bool full;
    void **elements;
} queue;

queue *queue_create(size_t size, size_t element_size);
void queue_destroy(queue *q);
bool queue_enqueue(queue *q, void *element);
void *queue_dequeue(queue *q);
void *queue_front(queue *q);
bool queue_empty(queue *q);
bool queue_full(queue *q);

#endif // QUEUES_H
