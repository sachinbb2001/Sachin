#include <stdio.h>
/*
Name: Sachin Belavi
Date: 07/09/2023
Title:WAP to toggle 'n' bits from given position of a number
Sample Input:Enter the number: 10
             Enter number of bits: 3
             Enter the pos: 5
Sample Output: result = 50
*/

int toggle_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}
int toggle_nbits_from_pos(int num, int n, int pos)
{
    int m = ((1 << n) - 1);  
    m = m << (pos - n + 1);
    num = num ^ m;
    return num;
}
