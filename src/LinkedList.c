/**
 * LinkedList Implementation in C
 * @author Asier Garcia Ruiz
 */

#include <stdlib.h>
#include "LinkedList.h"

/**
 * Static function declarations
 */

static LinkedList* create_linked_list(void);
static LLNode* create_node(int data);

/** create_linked_list
 * Creates a new LL
 */
LinkedList* create_linked_list(void)
{
    LinkedList* newLL;
    if (!(newLL = (LinkedList *) malloc(sizeof(LinkedList)))) return NULL;
    newLL->head = NULL;
    newLL->size = 0;

    return newLL;
}

/** create node
 * Creates a node for the Linked List.
 * @param data the data we want to input.
 * @return pointer to the new node created.
 */

LLNode* create_node(int data)
{

    LLNode *newNode;
    if (!(newNode = (LLNode *) malloc(sizeof(LLNode)))) return NULL;

    newNode->next = NULL;
    newNode->data = data;

    return newNode;
}


/** push front
 * Pushes data to front of the LL
 * @param list the list to which we are adding the node.
 * @param data the data we are adding.
 * @return 1 if successful, 0 otherwise.
 */

int push_front(LinkedList *list, int data)
{
    if (list == NULL) return 0;
    LLNode *newNode = create_node(data);
    newNode->next = list->head;
    list->head = newNode;
    list->size++;

    return 1;
}

int push_at_index(LinkedList *list, int data, int index) {
    if (list == NULL || index < 0 || index > list->size) return 0;

    if (index == 0 || list->size == 0) return push_front(list, data);

    int counter = 0;
    LLNode *currNode = list->head;
    LLNode *newNode = create_node(data);

    while (counter < index - 1) {
        currNode = currNode->next;
    }

    newNode->next = currNode->next;
    currNode->next = newNode;
    list->size++;
    return 1;
}

int remove_front(LinkedList *list) {
    if (list == NULL || list->size == 0) return 0;

    LLNode *delNode = list->head;
    list->head = list->head->next;
    list->size--;

    int outData = delNode->data;
    free(delNode);

    return outData;
}

int remove_at_index(LinkedList *list, int index) {
    if (list == NULL || list->size == 0) return 0;

    if (index == 0) return remove_front(list);

    LLNode *currNode = list->head;
    int counter = 0;
    
}