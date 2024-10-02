#include "sll.h"

int sl_delete_list(Slist **head)
{
    if(*head !=NULL)
    {
        while(*head != NULL)
        {
            Slist *temp = *head;
	        if(temp != NULL )
	        {
	            *head = temp ->link;
                free(temp);
	        }
        }
        return SUCCESS;
    }
    return FAILURE;
}