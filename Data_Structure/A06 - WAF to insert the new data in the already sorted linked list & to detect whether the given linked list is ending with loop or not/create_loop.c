#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    if(*head == NULL)
    return LIST_EMPTY;
    
    Slist *temp1 = *head;
    Slist *temp2 = NULL;
    
    while(temp1 ->link != NULL)
    {
        if(temp1 -> data == data)
        {
            temp2 = temp1;
        }
        temp1 = temp1 -> link;
    }
    if(temp1 -> data == data)
    {
        temp2 = temp1;
    }
    if(temp2 == NULL)
    {
        return DATA_NOT_FOUND;
    }
    temp1 -> link = temp2;
    return SUCCESS;
}