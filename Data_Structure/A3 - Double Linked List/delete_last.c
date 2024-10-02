#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    if(*head == NULL)
    return FAILURE;
    Dlist *temp;
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = *tail = NULL;
        return SUCCESS;
    }
    temp = *tail;
    *tail = temp -> prev;
    free(temp);
    (*tail) -> next = NULL;
    return SUCCESS;


}