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
 *
 * createStack() and deleteStack() functions.
 *
 * These functions are used for implementation independence
 * and consistency. By including this functions, you have the
 * possibility to change the underlying implementation of the 
 * stack without needing to change the programs that use the
 * stack.
 * 
 *  General-purpose solution using void pointers.
 */

#ifndef STACKS_H
#define STACKS_H

#include <stdbool.h>

typedef struct Element {
    struct Element *next;
    void *data;
} Element;

void push(Element **stack, void *data);
void *pop(Element **stack, void **data);
bool createStack(Element **stack);
bool deleteStack(Element **stack);

#endif /* STACKS_H */
