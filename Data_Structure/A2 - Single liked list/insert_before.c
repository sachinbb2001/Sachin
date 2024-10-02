#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    if(*head == NULL)
    return LIST_EMPTY;
    Slist *temp = *head;
    Slist *prev = temp;
    if((*head) -> data == g_data)
    {
        Slist *new = malloc(sizeof(Slist));
        new -> data = ndata;
        new -> link = *head;
        *head = new;
        return SUCCESS;
    }
    while(temp != NULL)
    {
        if(temp -> data != g_data)
        {
            prev = temp;
            temp = temp -> link; 
        }
        else
        {
            Slist *new = malloc(sizeof(Slist));
            if(new == NULL)
                return FAILURE;
            else
            {
                new -> data = ndata;
                new -> link = prev -> link;
                prev -> link = new;
            }
            return SUCCESS;
        }
    }
    return DATA_NOT_FOUND;
}