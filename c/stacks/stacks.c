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

#include "stacks.h"


/* createStack() sets the stack pointer to NULL and return success */
bool createStack(Element **stack) 
{
    *stack = NULL;
    return true;
}


/* push() allocates the new element, checks for failure, sets the data
 * of the new element, places it at the top of the stack, and adjusts the
 * stack pointer */
bool push(Element **stack, void *data) 
{
    Element *elem = malloc(sizeof(Element));
    if(!elem) return false;

    elem->data = data;
    elem->next = *stack;
    *stack = elem;
    return true;
}


/* pop() checks that the stack isn't empty, fetches the data from the top
 * element, adjusts the stack pointer, and frees the element that is no longer
 * on the stack */
bool pop(Element **stack, void **data) 
{
    Element *elem;
    if(!(elem = *stack)) return false;

    *data = elem->data;
    *stack = elem-> next;
    free(elem);
    return true;
}


/* deleteStack() traverse the data structure, freeing as you go. */
bool deleteStack(Element **stack)
{
    Element *next;
    while(*stack) {
        next = (*stack)->next;
        free(*stack);
        *stack = next;
    }

    return true;
}
