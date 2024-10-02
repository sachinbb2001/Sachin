#include "sll.h"

int find_node(Slist *head, data_t data)
{
    if(head == NULL)
    return FAILURE;
    Slist *temp = head;
    int count = 1;
    while(temp  != NULL)
    {
        if(temp -> data != data)
        {
            temp = temp -> link;
            count++;
        }
        else
        {
            return count;
        }
    }
    return FAILURE;
}
