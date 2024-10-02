#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title:WAP to print 'n' bits from LSB of a number
Sample Input:Enter the number: 10
             Enter number of bits: 12
Sample Output: Binary form of 10:0 0 0 0 0 0 0 0 1 0 1 0
*/

void fun(int arr1[], int size, int arr2[], int new_size);

int main()
{
 int size;
 static int new_size;
 int arr1[size],arr2[size];   
 //take values from user
 printf("Enter the size : ");
 scanf("%d",&size);
 printf("Enter elements into the array: ");
 for(int i = 0; i<size ; i++)
 {
    scanf("%d", &arr1[i]);
 }
    fun(arr1,size,arr2,new_size);
    
}
void fun(int *arr1,int size,int *arr2,int new_size)
{
    int i,j;    
    for(int i = 0; i < size ;i++)    //check duplicates element
    {
        for(j= i + 1;j < size; j++)
        {
            if(arr1[i] == arr1[j])
            {
                arr1[j] = 0;
            }

        }
    }
    for(i = 0;i < size; i++)
    {
        if(arr1[i] > 0)
        {
            arr2[new_size++] = arr1[i];
        }
    }
    
    //display the resut using printf
        printf("After removing duplicates: ");
    for(i = 0;i < new_size; i++)
    printf("%d ",arr2[i]);
}
    