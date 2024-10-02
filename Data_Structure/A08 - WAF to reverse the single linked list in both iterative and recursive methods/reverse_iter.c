#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
    if(*head == NULL)
    return LIST_EMPTY;
    Slist *prev = NULL;
    Slist *next = *head;
    Slist *cur = *head;
    while(cur != NULL)
    {
        next = next -> link;
        cur -> link = prev;
        prev = cur;
        cur = next;        
    }
    *head = prev; 
} 