#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title:WAP to print 'n' bits from LSB of a number
Sample Input:Enter the number: 10
             Enter number of bits: 12
Sample Output: Binary form of 10:0 0 0 0 0 0 0 0 1 0 1 0
*/

int print_bits(int, int);

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");    //enter the value from user
    scanf("%d%d", &num, &n);      
    
    printf("Binary form of %d:", num);   //print binary in form of 0's and 1's
    print_bits(num, n);
 }
 int print_bits(int num,int n)
 {
     for(int i = 1 << n - 1; i > 0; i= i/2)
     {
         if(num & i)   //if condition to check bit is set or not
         {
             printf("1 ");
         }
         else
         {
             printf("0 ");
         }
     }
 }