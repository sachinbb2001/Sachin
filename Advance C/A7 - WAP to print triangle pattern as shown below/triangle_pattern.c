#include<stdio.h>
/*
Name: Sachin Belavi
Date: 29/08/2023
Title:WAP to print triangle pattern as shown below
Sample Input:Enter the value of 'n' : 5
Sample Output:
1 2 3 4 5
6 _ _ 7
8 _ 9
10 11
12
*/

int main()
{
    int num;      //Take the vaue from the user
    printf("Enter the number: ");
    scanf("%d",&num);
    int k=1;
    for(int i=1;i<=num;i++)    //for loop for rows 
    {
        for(int j=1;j<=num;j++)   //for loop for coumns
        {
            if((i==1) || (j==1))   //condition check for horizontal and vertical line
            {
                printf("%d ",k);   
                k++;
            }
            else if((i+j)==(num+1))   //condition check for diogonal line
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf("  ");     //print the space after each value
                
            }
        }
        printf("\n");      //print to use new line
    }
    return 0;
}