/* ll.c - Linked List common operations
 * https://www.learn-c.org/en/Linked_lists
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int val;
    struct node *next;
} node_t;

int push(node_t *head, int val);
int push_front(node_t **head, int val);
int pop(node_t **head);

int main(int argc, char *argv[])
{
    node_t *head;
    node_t *current;

    head = malloc(sizeof(node_t));
    if(head == NULL) {
        return -1;
    }

    head->val = 5;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

    push(head, 8);
    push_front(&head, 14);

    /* Iterating over a list */
    current = head;
    while(current != NULL) {
        printf("Node value = %d\n", current->val);
        current = current->next;
    }

    /* Delete the head node */
    printf("Head value before deletion = %d\n", head->val);
    printf("Head value after deletion = %d\n", head->val);

    return 0;
}

/* Adding an item at the end of the list */
int push(node_t *head, int val)
{
    node_t *current;

    /* Iterating over the list */
    current = head;
    while(current->next != NULL) {
        current = current->next;
    }
    
    /* Now we can add at the element at the end */
    current->next = malloc(sizeof(node_t));
    if(current->next == NULL) {
        return -1;
    }
    current->next->val = val;
    current->next->next = NULL;
    
    return 0;
}

/* Adding an item at the beginning of the list */
int push_front(node_t **head, int val)
{
    /* Double pointer to head is needed, since we want
     * to modify the contents of the head pointer (i.e.,
     * the address that it points to).
     */
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    if(new_node == NULL) {
        return -1;
    }

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;

    return 0;
}

/* Removing the first item, i.e., popping from the list */
int pop(node_t **head)
{
    node_t *next_node;
    int val;

    if(*head == NULL){
        return -1;
    }

    next_node = (*head)->next;
    val = (*head)->val;
    free(*head);
    *head = next_node;

    return val;
}
