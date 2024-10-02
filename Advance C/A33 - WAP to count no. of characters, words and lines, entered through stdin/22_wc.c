#include<stdio.h>
/*
Name: Sachin Belavi
Date: 11/10/2023
Title:WAP to count no. of characters, words and lines, entered through stdin
Sample Input:Hello world
Dennis Ritchie
Linux
Sample Output:Character count : 33
Line count : 3
Word count : 5
*/

int main()
{
    char ch,temp;
    int c=0,l=0,w=0;     
    while((ch = getchar()) != EOF)  
    {
        c++;
        if (ch == '\n')  /*if is used to find line count*/
        {
            l++;
        }
        if(ch == ' ' || ch == '\n' || ch == '\t' )
        {

            if(temp != ' ' && temp !='\n' && temp != '\t' ) /*it is used to find word count */
            {
                w++;
            }
        }
        temp =ch;
}
printf("Character count :%d\n ",c);  
printf("Line count :%d\n ",l);       
printf("Word count : %d\n" ,w);      

    return 0;
}