#include <stdio.h>
/*
Name: Sachin Belavi
Date: 16/09/2023
Title:WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample Input:Enter the value of 'num' : 11
             Enter the value of 'a' : 3
             Enter the value of 'b' : 5
             Enter the value of 'val': 174
Sample Output: Result : 158
*/

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");   //take value from user
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    if(a <= b && b <= 31)   //checking a and b value within the range
    {
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
    }
    else
    {
        printf("invalid output : please pass the value a and b less than or equal to 31\n");
    }
}
int replace_nbits_from_pos(int num,int a,int b,int val)
{
    int res = ((num & ((1 << a) - 1)) << a) | (val & (~(((1 << a) - 1) << a)));  //it repace num bits from the position
    return res;
}