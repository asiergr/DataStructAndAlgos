/**
 * LinkedList implementation in C
 * @author Asier Garcia Ruiz
 */

typedef struct llnode
{
    int data;
    struct llnode *next;
} LLNode;

typedef struct linkedlist
{
    LLNode* head;
    int size;
} LinkedList;

/** Inserting */
int push_front(LinkedList *list, int data);
int push_at_index(LinkedList *list, int data, int index);

/** Querying */
int get(LinkedList *list, int index);
int contains(LinkedList *list, int data);

/** Removing */
int remove_front(LinkedList *list);
int remove_at_index(LinkedList *list, int index);
int clear(LinkedList *list, int index);