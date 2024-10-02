#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    if(*head == NULL)
    {
        if(n == 1)
        {
            Slist *new = malloc(sizeof(Slist));
            if (new == NULL)
            return FAILURE;
            new->data = data;
            new -> link = NULL;
            *head = new;
            return SUCCESS;
        }
        else
        return LIST_EMPTY;
    }
    Slist *temp = *head;
    Slist *prev = temp;
   
    if(n == 1)
    {
        Slist *new = malloc(sizeof(Slist));
        new -> data = data;
        new -> link = *head;
        *head = new;
        return SUCCESS;
    }
    else
    {
        for(int i=1; i<=n-1; i++)
        {
            if(temp != NULL)
            {
                prev = temp;
                temp = temp -> link; 
            }
            else
            {
                return POSITION_NOT_FOUND;
            }
        }
        Slist *new = malloc(sizeof(Slist));
        if(new == NULL)
        return FAILURE;
        new -> data = data;
        new -> link = prev -> link;
        prev -> link = new;
        return SUCCESS;
    }
    
}