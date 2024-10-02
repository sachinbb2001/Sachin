#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title:WAP to implement Circular left shift
Sample Input:Enter num: 12
Enter n:3 
Sample Output: result in binary : 00000000000000000000....
*/

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");     //enter number from user
    scanf("%d", &num);
    
    printf("Enter n:");      //enter the n from user
    scanf("%d", &n);
    
    ret = circular_left(num, n);   //function call
    
    printf("Result in Binary:");
    
    print_bits(ret);
}
int circular_left(int num, int n)
{
    int ret = (num << n) | ((unsigned)num) >> (32 -n);  //to get result
    return ret;
}
int print_bits(int num)
{
    for(int i = 31; i >= 0; i--)  //it print binary value msb to lsb
    {
        if(num & 1 << i)     //condition to print binary value in 1's or 0's
        {
            printf("1 ");   //print 1
        }
        else
        {
            printf("0 ");   //print 0
        }
    }
}