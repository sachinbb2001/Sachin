#include "sll.h"

int reverse_recursion(Slist **head)
{
    if(*head == NULL)
    return LIST_EMPTY;
    static Slist *prev = NULL;
    Slist *next = *head;
    Slist *cur = next;

    next = cur -> link;
    cur -> link = prev;
    prev = cur;
    cur = next; 
    if(cur !=NULL)
    reverse_recursion(&cur);
    *head = prev;
    return SUCCESS;
}