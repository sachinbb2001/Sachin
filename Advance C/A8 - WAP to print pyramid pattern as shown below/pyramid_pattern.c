#include<stdio.h>
/*
Name: Sachin Belavi
Date: 03/09/2023
Title:WAP to print pyramid pattern as shown below
Sample Input:Enter the number: 5
Sample Output:-
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

int main()
{
    int i,j,num;                                     //take num from user 
    printf("Enter the number: ");                      
    scanf("%d",&num);                                //read input from user

    for(i = 1; i <= num; i++)                       //to get upper half pattern
    {                                                       
        for(j = 1; j <= i ; j++)                     
        {
            printf("%d ",(num -  i) + j);                //expression prints the upper half patter
        }
            printf("\n");                         //it prints new line
    }       
    for(i = num; i >= 1; i--)                          //lower half pattern
    {                                                         
        for(j = 2; j <= num; j++)
        {
             if(j <= i)                                    //condition to print number of column
            {
                printf("%d ",(num - i) + j);               //this expression prints the lower half pattern
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");                                            //it prints new line
    }
}