#include <stdio.h>
/*
Name: Sachin Belavi
Date: 25/10/2023
Title:WAP to define a macro SIZEOF(x), without using sizeof operator
Sample Input:int x;
Sample Output:Size of int : 4 bytes
*/
#define SIZEOF(x)  ((char *)(&x+1) - (char *)(&x))

int main()
{
    int x;
    printf("size of int : %zu bytes\n",SIZEOF(x));
    
    char a;
    printf("Size of char : %zu bytes\n",SIZEOF(a));
    
    float b;
    printf("Size of float : %zu bytes\n",SIZEOF(b));  
    
    double c;
    printf("Size of double : %zu bytes\n",SIZEOF(c)); 
    
    unsigned int d;
    printf("Size of unsigned int : %zu bytes\n",SIZEOF(d)); 
    
    long int e;
    printf("Size of long int : %zu bytes\n",SIZEOF(e)); 
    
    short int f;
    printf("Size of short int : %zu bytes\n",SIZEOF(f)); 
    
    unsigned long int h;
    printf("Size of unsigned long int : %zu bytes\n",SIZEOF(h)); 
    
    
 
    

}