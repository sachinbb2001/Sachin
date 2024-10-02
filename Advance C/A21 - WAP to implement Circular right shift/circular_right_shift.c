#include <stdio.h>
/*
Name: Sachin Belavi
Date: 14/09/2023
Title:WAP to implement Circular right shift
Sample Input:Enter num: 12
Enter n:3 
Sample Output: result in binary : 00000000000000000000....
*/

int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    printf("Result in Binary : ");
    ret = circular_right(num, n);
    
    print_bits(ret);
}
int circular_right(int num, int n)
{
  int  ret = (num & ((1 << n) - 1))<<(32 - n) | (unsigned)num>>n;   //to get result
  return ret;
}
int print_bits(int num)
{
    for(int i = 31;i >= 0; i--)
    {
        if(num & 1 << i)     //condition to print binary value in 1's or 0's
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}