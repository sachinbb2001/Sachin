#include <stdio.h>
/*
Name: Sachin Belavi
Date: 31/08/2023
Title:WAP to get 'n' bits of a given  number
Sample Input:Enter the value of 'n' : 
Enter the number: 10
Enter number of bits:3 
Sample Output: result = 2
*/


int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}
int  get_nbits(int num,int n)
{
return(num & ((1<<n)-1));
}