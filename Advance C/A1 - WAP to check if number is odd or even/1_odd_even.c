#include<stdio.h>
/*
Name: Sachin Belavi
Date: 09/08/2023
Title:WAP to check if number is odd or even
Sample Input:Enter the value of 'n' : -2
Sample Output:-2 is negative even number
*/

int main()
{
int N;          //read N from user
printf("Enter the value of n : ");
scanf("%d",&N);
if(N==0)     //condition check for N=0
{
       printf("%d is neither odd nor even\n",N);
}
       else if(N%2==0)  //condition to check even or odd
       {
           if(N>0)   //condition check for positive number
           {
           printf("%d is positive Even  number\n",N); //if condition true print this message
           }
           else
           {
               printf("%d is negative Even number\n",N); //if false print this message
           }
       }
       else if(N%2!=0)  //condition to check even or odd
       {
           if(N<0)   //condition check for positive number
           {
           printf("%d is negative odd number\n",N); //if condition true print this message
           }
           else
           {
               printf("%d is positive odd number\n",N); //if false print this message
           }
       }
return 0;
}