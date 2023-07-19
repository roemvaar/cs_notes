#include "queue.h"

int main(void)
{
    queue *q;
    int num;

    q = queue_create(2, sizeof(int));
    queue_dequeue(q);

    num = 10;
    queue_enqueue(q, &num);
    // q->head = 5;
    // q->
    num = 15;
    queue_enqueue(q, &num);
    num = 2;
    queue_enqueue(q, &num);
    queue_dequeue(q);

    while (!queue_empty(q)) {
        printf("%d\n", *((int *)queue_dequeue(q)));
    }

    queue_dequeue(q);

    queue_destroy(q);

    // queue *q_char;
    // char letter;
    
    // q_char = queue_create(4, sizeof(char));
    
    // letter = 'x';
    // queue_enqueue(q_char, &letter);
    // letter = 'y';
    // queue_enqueue(q_char, &letter);
    // letter = 'z';
    // queue_enqueue(q_char, &letter);
    // letter = 'm';
    // queue_enqueue(q_char, &letter);
    // letter = 'e';
    // queue_enqueue(q_char, &letter);

    // while (!queue_empty(q_char)) {
    //     printf("%c\n", *((char *)queue_dequeue(q_char)));
    // // }

    // queue_destroy(q_char);

    return 0;
}

queue *queue_create(size_t size, size_t element_size)
{
    queue *q;
    size_t i;

    q = (queue *)malloc(sizeof(queue));
    q->elements = malloc(size * sizeof(void *));

    for (i = 0; i < size; i++) {
        *(q->elements+i) = malloc(element_size);
    }

    q->element_size = element_size;
    q->head = 0;
    q->tail = 0;
    q->size = size;
    q->full = false;
    q->empty = true;

    return q;
}

void queue_destroy(queue *q)
{
    size_t i;

    for (i = 0; i < q->size; i++) {
        free(*(q->elements+i));
    }

    free(q->elements);
    free(q);
}

bool queue_enqueue(queue *q, void *element)
{
    size_t i;

    if (queue_full(q)) {
        printf("error: queue full\n");
        return false;
    }

    memcpy(q->elements[q->tail], element, q->element_size);
    // for (i = 0; i < q->element_size; i++) {
    //     *(((char *)q->elements[q->tail]) + i) = *(((char *)element) + i);
    // }

    q->tail = (q->tail + 1) % q->size;
    if (q->head == q->tail) {
        q->full = true;
    }

    if (q->empty) {
        q->empty = false;
    }

    return true;
}

void *queue_dequeue(queue *q)
{
    void *element;

    if (queue_empty(q)) {
        printf("error: queue empty\n");
        return NULL;
    }

    element = q->elements[q->head];

    q->head = (q->head + 1) % q->size;
    if (q->head == q->tail) {
        q->empty = true;
    }

    if (q->full) {
        q->full = false;
    }

    return element;
}

void *queue_front(queue *q)
{
    void *element;

    if (queue_empty(q)) {
        return NULL;
    }

    element = q->elements[q->head];

    return element;
}

bool queue_empty(queue *q)
{
    return q->empty;
}

bool queue_full(queue *q)
{
    return q->full;
}
