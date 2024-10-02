#include "sll.h"

int sl_sort(Slist **head)
{
    if(*head == NULL)
    return LIST_EMPTY;
    
    Slist *cur = *head;
    int count = 1;
    
    while(cur != NULL)
    {
        cur = cur -> link;
        count++;
    }
    
    for(int i=0; i<count-1;i++)
    {
        cur = *head;
        Slist *prev = NULL;
        Slist *next = cur -> link;
        for(int j=1;j<count-i-1;j++)
        {
            int temp=0;
            if(cur -> data > next -> data)
            {
                if(prev == NULL)
                {
                    *head = next;
                    cur -> link = next -> link;
                    next -> link = cur;
                }
                else
                {
                    prev -> link = next;
                    cur -> link = next -> link;
                    next -> link = cur;
                }
                temp = 1;
            }
            else
            {
                prev = cur;
                cur = next;
                next = next -> link;
            }
            if(temp == 1)
            {
                prev = next;
                next = cur -> link;
            } 
        }
    }
}