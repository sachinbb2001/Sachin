#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    if(first <= last)
    {
        int mid = (first + last)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key <  arr[mid])
        {
             binarySearch_recursive(arr,size,key,first,--mid);
        }
        else
        {
            binarySearch_recursive(arr,size,key,++mid,last);
        }
    }
    else
    {
        return DATA_NOT_FOUND;
    }
}
