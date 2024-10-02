#include <stdio.h>
#include <string.h>
/*
Name: sachin Belavi
Date: 24/09/2023
Title:WAP to implement getword function
Sample Input:Enter the string : Hello
Sample Output: you entered Hello and the length is 5
*/

int getword(char str[]);

int main()
{
        int len = 0;
	    char str[100];

	    //	printf("Enter the string : ");   //take string from user
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}
int getword(char str[])
{
    int i,count = 0;
    for(i = 0; i <= strlen(str)-1 ;i++)   
    {
        if(str[i] != ' ')    //condition to stop length of string if it is space 
        {
            count++;
        }
        else
        {
            str[i] = '\0';
            break;
        }
    }
    return count;
}