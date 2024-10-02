#include <stdio.h>
/*
Name: Sachin Belavi
Date: 17/09/2023
Title:Print the values in sorted order without modifying or copying array
Sample Input:Enter the size : 5
             Enter 5 elements 10 1 3  8 -1
Sample Output: Original array values 10 1 3 8 -1
*/

void print_sort(int [], int);

int main()
{
    int size, iter;
    
    //printf("Enter the size of the array : ");   //take value from user
    scanf("%d", &size);
    
    int arr[size];
    
   // printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
}
void print_sort(int arr[],int size)
{
    int small = arr[0];
    int large = arr[0];
    for(int i=0; i<size;i++)
    {
        if(large < arr[i])  //condition to find largest
        large = arr[i];
        
        if(small > arr[i])   //condition to find smallest
        small = arr[i];
    }
    int  sec_small=large;  //larger variable stroing 
    printf("After sorting ");
    for(int i=0;i<size;i++)  //loop to print sorted array element
    {
        for(int i=0;i<size;i++)  
        {
        //loop to find second smallest element
        
            if(arr[i] > small && arr[i] < sec_small)
            {
                sec_small = arr[i];
            }
        }
        printf("%d ",small);  //print small element for each iteration
        small = sec_small;
        sec_small = large;
    }
    printf("\n");
    printf("Original array values ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}