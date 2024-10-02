#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
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
    temp = *head;
    *head = temp -> next;
    free(temp);
    (*head) -> prev = NULL;
    return SUCCESS;
    
}