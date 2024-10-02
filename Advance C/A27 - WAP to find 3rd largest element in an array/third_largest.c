#include <stdio.h>
/*
Name: Sachin Belavi
Date: 13/09/2023
Title:WAP to find 3nd largest element in an array
Sample Input:Enter the size of the Array : 5
             Enter the elements into the array: 5 1 4 2 8
Sample Output:third largest element of the array is 4
*/

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    printf("Enter the elements into the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}
int third_largest(int arr[],int size)
{
    int largest = arr[0];
    int sec_largest = arr[1];
    int third_largest= arr[2];
    for(int i=0; i<size;i++)
    {
        if(largest < arr[i] )   //condition to check largest element in array
        {
            third_largest = sec_largest;
            sec_largest=largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] < largest)   //condition to check second largest element in array
        {
            third_largest = sec_largest;
            sec_largest = arr[i];
                           
        }
        else if(arr[i] > third_largest && arr[i] < sec_largest)
        {
            third_largest = arr[i];   //condition to check  third largest element in array
        }
    }
    return third_largest;
}