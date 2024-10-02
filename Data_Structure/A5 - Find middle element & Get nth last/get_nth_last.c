#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
    if(head == NULL)
    return LIST_EMPTY;
    Slist *temp1 = head;
    Slist *temp2 = head;
    if(pos == 0)
    return FAILURE;
    for(int i=1; i<= pos; i++)
    {
        if(temp1 != NULL)
        {
            temp1 = temp1 -> link;
        }
        else
        return FAILURE;
    }
    while(temp1 != NULL)
    {
        temp1 = temp1 -> link;
        temp2 = temp2 -> link;
    }
    *data = temp2 -> data;
    return SUCCESS;

} 