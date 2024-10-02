#include "stack.h"

int Peek(Stack_t **top)
{
    if(*top == NULL )
    return FAILURE;
    Stack_t *temp = *top;
    return temp -> data;

}