#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{ 
    Slist *new = malloc(sizeof(Slist));
    if(new == NULL)
    return FAILURE;
    new -> data = data;
    new -> link = NULL;
    if(*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }
    Slist *temp = *head;
    if(temp -> data > data)
    {
        new -> link = temp;
        *head = new;
        return SUCCESS;
    }
        while(temp -> link != NULL)
        {
            if(temp -> link -> data > data)
            {
                new -> link = temp -> link;
                temp -> link =new;
                return SUCCESS;
            }
            else
            temp = temp -> link;
        }
        temp -> link =new;
    
    
return SUCCESS;
} 