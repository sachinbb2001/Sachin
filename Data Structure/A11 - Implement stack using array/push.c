#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
    if(s -> top == s -> capacity - 1)
         return FAILURE;
        ++s -> top;
        s -> stack[s -> top] = element;
        return SUCCESS;
         
}
