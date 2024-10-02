#include <stdio.h>
#include<string.h>
/*
Name: Sachin Belavi
Date: 24/09/2023
Title:WAP to replace each string of one or more blanks by a single blank
Sample Input:Enter the string with more spaces in between two words Welcome          to Emertxe
Sample Output: Welcome to Emertxe
*/

void replace_blank(char []);

int main()
{
    char str[100];
    
    //printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}
void replace_blank(char str[]) //function prototype
{
    int i=0,j;
    while(str[i+1] != '\0' )  //it runs untill ch equal to \0
    {
        if(str[i]=='\t')    //if TAB found then replace it with ' '
        {
            str[i]=' '; 
        }
        if((str[i] == ' ') && (str[i+1] == ' ') || (str[i] == ' ') && (str[i+1] == '\t'))
        {
            j=i;
            while(str[j]!='\0')
            {
                str[j]=str[j+1];    
                j++;
            }
            i--;    //it goes back to where replacement startes
        }
        i++;   //it move to next character
    }
}