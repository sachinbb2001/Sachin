#include<stdio.h>
/*
Name: Sachin Belavi
Date: 30/08/2023
Title:WAP to count number of set bits in a given number and print parity
Sample Input:Enter the value of 'n' : 7
Sample Output:
Number of set bits = 3
Bit parity is Odd
*/

int main()
{
    int num, count = 0;      //take the value from user
    printf("Enter the number : ");       
    scanf("%d", &num);
    for(int i=0; i<=31; i++)     //for loop for range of number is 0-31 
    {
        if(num & (1<<i))   //condition to check the number of one's in entered number
        {
            count++;   
        }
    }
    printf("Number of set bits = %d\n",count);
    int parity = (count % 2);         //condition to check the number of one's are even or odd  
    if(parity == 0)
    {
        printf("Bit parity is Even"); //if condition true print the message
    }
    else
    {
        printf("Bit parity is odd");  //if condition false print the message
    }
    return 0;
}