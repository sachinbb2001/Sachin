#include <stdio.h>
#include<string.h>
/*
Name: sachin Belavi
Date: 13/10/2023
Title:Squeeze the character in s1 that matches any character in the string s2
Sample Input:Enter the string :
Enter s1 : Dennis Ritchie
Enter s2 : Linux
Sample Output: After squeeze s1 : Des Rtche
*/
void squeeze(char [], char []);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");   //enter string 1 from user
    scanf("%[^\n]", str1);
    

    printf("Enter string2:");    //enter string 2 from user
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}
void squeeze(char str1[],char str2[])
{
   int  len1 = strlen(str1);   //find length of string 1
     int  len2 = strlen(str2);  //find length of string 2
     int k;
    
    for(int i=0; i<len2;i++)     
    {
        for(int j=k=0; j<len1; j++)
    {
        
        if(str1[j] == str2[i])   //if string 1 equal to string 2,then store string in another variabe k
        {
             k = j;
             while(str1[k])     
             {
                 str1[k]=str1[k+1];
                 k++;
             }
             j--;
             }
        }
    }
}