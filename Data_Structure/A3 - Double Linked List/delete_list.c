#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    if(*head==NULL)
    {
        return FAILURE;
    }
    Dlist *temp = *head;
    while(temp!= NULL)
    {
        *head = temp ->next;
        free(temp);
        temp=*head;
    }
    *tail = NULL;
}