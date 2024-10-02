#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    if(*head == NULL)
    return FAILURE;
    Slist *temp = *head;
    Slist *prev = temp;
    if(temp -> data == data)
    {
        *head = temp -> link;
        free(temp);
        return SUCCESS;
    }
    while(temp != NULL)
    {
        if(temp -> data != data)
        {
            prev = temp;
            temp = temp -> link; 
        }
        else
        {
            prev -> link  = temp -> link;
            free(temp);
            return SUCCESS;
        }
    }
        return DATA_NOT_FOUND;
}