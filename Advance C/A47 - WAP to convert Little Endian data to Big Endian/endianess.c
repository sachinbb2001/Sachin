#include<stdio.h>
/*
Name: Sachin Belavi
Date: 25/10/2023
Title:WAP to convert Little Endian data to Big Endian
Sample Input:Enter the size: 2
             Enter any number in Hexadecimal: ABCD
Sample Output:After conversion CDAB
*/

int main()
{
    int size,num;
 //   printf("Enter the size : ");
    scanf("%d",&size);
    
 //   printf("Enter any number in Hexadecimal : ");
    scanf("%x",&num);
    
    char *ptr = (char*)&num;
    char temp;
    if(size == 2)
    {
        temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;
        
        printf("After conversion %X",num);
    }
    
    if(size == 4)
    {
        for(int i=0; i<size/2;i++)
        {
            temp = ptr[i];
            ptr[i]= ptr[size-i-1];
            ptr[size-1-i]=temp;
        }
        printf("After conversion %X",num);
    }
}
