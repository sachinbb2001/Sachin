#include <stdio.h>
#include <string.h>
/*
Name: Sachin Belavi
Date: 02/10/2023
Title:WAP to reverse the given string using iterative method
Sample Input:Enter a string : Hello World
Sample Output: Reverse string is : dlroW olleH
*/

void reverse_iterative(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%29[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}
void reverse_iterative(char *str)
{
    int len,i;
    char *begin_ptr;;
    char *end_ptr;
    char ch;
    
    len = strlen(str);
    
    begin_ptr = str;
    end_ptr = str;
    
    for(i = 0; i < len - 1; i++)   //move end pointer to last character
    {
        end_ptr++; 
    }
    
    for(i = 0; i < len / 2;i++)
    {
        ch = *end_ptr;           //swap the character
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        
        *begin_ptr++;   //increment begining pointer position
        *end_ptr--;     //decrement end pointer position
    }
    
}