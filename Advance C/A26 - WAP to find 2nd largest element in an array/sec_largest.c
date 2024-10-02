#include <stdio.h>
/*
Name: Sachin Belavi
Date: 12/09/2023
Title:WAP to find 2nd largest element in an array
Sample Input:Enter the size of the Array : 5
             Enter the elements into the array: 5 1 4 2 8
Sample Output:Second largest element of the array is 5
*/

int sec_largest(int arr[], int size);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    printf("Enter the elements into the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //funtion call
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest(int arr[],int size)
{
    int largest = arr[0];    //initializing largest equal to arr[0]
    int sec_largest = arr[1];
    for(int i=0; i<size;i++)
    {
        if(largest < arr[i] )   //condition to check largest element in array
        {
            sec_largest=largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] < largest)  //condition to check  second argest element in array
        {
                sec_largest = arr[i];
        }
    }
    return sec_largest;
}