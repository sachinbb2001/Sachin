#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
     if(*head == NULL)
        return LIST_EMPTY;
     Dlist *temp = *head;
     while(temp)
     {
        if(temp -> data == gdata)
        {
            Dlist *new = malloc(sizeof(Dlist));
            if(new == NULL)
            return FAILURE;
            new -> data = ndata;
            if(temp == *tail)
            {
                (*tail) -> next = new;
                new -> next = NULL;
                new -> prev = *tail;
                *tail = new;
            }
            else
            {
                new -> next = temp;
                new -> prev = temp -> prev;
                temp -> prev -> next = new;
                temp -> prev = new;
            }
            return SUCCESS;
        }
        temp = temp -> next;
    }
    return DATA_NOT_FOUND;
}