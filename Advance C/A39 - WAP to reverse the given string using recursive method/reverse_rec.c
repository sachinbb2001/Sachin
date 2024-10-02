#include <stdio.h>
#include <string.h>
/*
Name: Sachin Belavi
Date: 28/09/2023
Title:WAP to reverse the given string using recursive method
Sample Input:Enter a string : Hello World
Sample Output: Reverse string is : dlroW olleH
*/

void reverse_recursive(char str[], int ind, int len);

int main()
{
    char str[30];
    
    
    //printf("Enter any string : ");
    scanf("%30[^\n]", str);
    
    reverse_recursive(str, 0, strlen(str));
    
    printf("Reversed string is %s\n", str);
}
void reverse_recursive(char str[], int ind, int len)
{
    char ch;
    if(ind < len/2)     //if statement is use to swap upto len/2 times
    {
        ch = str[ind];   //swap the string
        str[ind] = str[len-1-ind];
        str[len-1-ind] = ch;
        
        ind++;    //increment index
        reverse_recursive(str,ind,len);
    }
    else
    {
       return;
    }
}