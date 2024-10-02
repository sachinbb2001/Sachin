#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int i,j;
    for(i = 1; i< size; i++)
    {
        int key = arr[i];
        j = i - 1;
        while((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = key;
        }
    }
}
