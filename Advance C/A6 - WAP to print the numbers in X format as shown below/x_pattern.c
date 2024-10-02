#include<stdio.h>
/*
Name: Sachin Belavi
Date: 19/08/2023
Title:WAP to print the numbers in X format as shown below
Sample Input:Enter a number: 6
Sample Output:Yes, entered number is perfect number
*/

int main()
{
    int num;
    printf("Enter a number : ");    //taking the value from the value
    scanf("%d",&num);               
    
    for(int i=1;i<=num;i++)         //run loop for i series of outre loop
    {
        for(int j=1;j<=num;j++)         //run loop for j series of outre loop
        {
            if(i==j || (i+j==num+1))    //condition to get X pattern
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}