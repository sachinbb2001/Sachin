#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    
    if(*rear == NULL)
        return FAILURE;
     
     
    Queue_t *temp = *front;
    
    if((*front)->link == NULL)
    {
        free(temp);
        *front = *rear = NULL;
    }
    else
    {
        *front = (*front)->link;
        free(temp);
    }

}