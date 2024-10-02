#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
/*
Name: Sachin Belavi
Date: 13/10/2023
Title:WAP to implement strtok function
Sample Input:Enter a string :Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
Sample Output: Reverse string is : Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai
*/

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}
char *my_strtok(char str[], const char delim[])
{
    int j = 0;                                  
	static int i;                                
	static char *temp;                          
	int length = i;                              
	if ( str != NULL )                           //if str is not equal to NULL addr then temp takes addressing of str
	{
		temp = str;
	}
	while ( temp[i] != '\0')                     //iterating with all characters from main string and checking for tokens
	{
		j = 0;
		while ( delim[j] != '\0' )               //iterating all tokens with each char of string and if found equal then replacing it
		{
			if ( delim[j] == temp[i] )           //if token found in string
			{
				temp[i] = '\0';                  
				i++;                             //Tincrementing next char
                if (temp[length] != '\0')        //if the prev char was not \0, then returning the base address for first and then address after \0
				{
					return (&temp[length]);
				}
				else
				{
					length = i;                  //if prev char and present char \0, then just moving with next char
					i--;                         //decrement
					break;                       //breaks from inner while loop
				}
			}
			j++;
		}
		i++;
	}
	if ( temp[length] == '\0' )                  //if \0 has been reached in main string then returning NULL as per behaviour of strtok
	{		
		return NULL;
	}
	else
	{
		return (&temp[length]);                  //returning the address
	}
}
