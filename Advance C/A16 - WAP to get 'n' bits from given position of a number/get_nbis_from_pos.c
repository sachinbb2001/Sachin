#include <stdio.h>
/*
Name: Sachin Belavi
Date: 31/08/2023
Title:WAP to get 'n' bits from given position of a number
Sample Input:Enter the value of 'n' : 
Enter the number: 15
Enter 'N':3 
Enter 'pos': 4
Sample Output: result =3
*/


int get_nbits_from_pos(int,int,int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Enter number of bits: ");
    scanf("%d",&n);
    
    printf("Enter the pos: ");
    scanf("%d",&pos);
    
  res = get_nbits_from_pos(num, n, pos);
  
  printf("Result = %d\n", res);
}

int get_nbits_from_pos(int num,int n,int pos)
{
int res = (num & ((1 << n) - 1) << pos - n + 1) >> pos - n +1; 
return res;
}
