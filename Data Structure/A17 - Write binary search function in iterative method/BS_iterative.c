#include "main.h"

/* Function for binary search using iterations */
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
    int low = 0,high = size - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == key)
        return mid;
        else if(key < arr[mid])
        high = mid - 1;
        else
        low = mid + 1;
    }
    return DATA_NOT_FOUND;
    
}
