#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    if(*head == NULL)
    return FAILURE;
    Slist *temp1 = *head;
    Slist *temp2;
    Slist *prev;
    while((temp1 != NULL) && (temp1 -> link  != NULL))
    {
        temp2 = temp1;
        while(temp2 -> link!= NULL)
        {
            if(temp1 -> data == temp2 -> link -> data)
            {
                prev = temp2 -> link;
                temp2 -> link = temp2 -> link -> link;
                free(prev);
            }
            else
            {
                temp2 = temp2 -> link;
            }
        }
        temp1 = temp1 -> link;
    }  
    
    return SUCCESS;
}