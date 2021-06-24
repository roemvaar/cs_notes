/* Stacks
 *
 * Stacks implementation in C using Linked Lists
 * 
 * This stack has the push() and pop() functions.
 * 
 * Each function must be passed the stack it operates on.
 * The push() operation will be passed the data it is to add
 * to the stack, and pop() will return a piece of data from
 * the top of the stack.
 */

#ifndef STACKS_H
#define STACKS_H

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

void push(Element *startOfStack, void *data);
void *pop(Element *startOfStack);

#endif /* STACKS_H */
