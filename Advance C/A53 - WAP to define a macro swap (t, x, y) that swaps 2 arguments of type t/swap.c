#include <stdio.h>
/*
Name: Sachin Belavi
Date: 27/10/2023
Title:WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample Input:
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
Sample Output:
After Swapping :
num1 : 20
num2 : 10
*/
#define swap(type, n1, n2)     \
{                              \
    type temp = n1;            \
    n1  =n2;                   \
    n2 =temp;                  \
}
int main()
{
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");
    int choice;
    printf("Enter you choice : ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        {
        int num1,num2;
        printf("Enter the num1 : ");
        scanf("%d",&num1);
        printf("Enter the num2 : ");
        scanf("%d",&num2);
        swap(int ,num1 ,num2);
        printf("after swaping:\n num1 : %d\nnum2 :%d\n",num1,num2);
        break;
        }
        
        
        case 2:
        {
        char num3,num4;
        printf("Enter the character num3 : ");
        getchar();
        scanf("%c",&num3);
        printf("Enter the character num4 : ");
        getchar();
        scanf("%c",&num4);
        swap(char ,num3 ,num4);
        printf("after swaping:\nnum3 : %c\nnum4 : %c\n",num3,num4);
        break;
       }
       
        case 3:
        {
        short num5,num6;
        printf("Enter the num5 : ");
        scanf("%hd",&num5);
        printf("Enter the num6 : ");
        scanf("%hd",&num6);
        swap(short ,num5 ,num6);
        printf("after swaping:\n num5 : %hd\nnum6 : %hd\n",num5,num6);
        break;
        }
        
        case 4:
        {
        float num7,num8;
        printf("Enter the float value num7 : ");
        scanf("%f",&num7);
        printf("Enter the float value num8 : ");
        scanf("%f",&num8);
        swap(float ,num7 ,num8);
        printf("after swaping:\n num7 : %f\nnum8 : %f\n",num7,num8);
        break;
        }
        
        case 5:
        {
        double num9,num10;
        printf("Enter the double value num9 : ");
        scanf("%le",&num9);
        printf("Enter the double value num10 : ");
        scanf("%le",&num10);
        swap(double ,num9 ,num10);
        printf("after swaping:\n num9 : %g\nnum10 : %g\n",num9,num10);
        break;
        }
        
        case 6:
        {
        char str1[20],str2[20];
        char *ptr1=str1;
        char *ptr2=str2;
        printf("Enter the string 1 : ");
        scanf("%s",str1);
        printf("Enter the string 2 : ");
        scanf("%s",str2);
        swap(char *,ptr1 ,ptr2);
        printf("after swaping:\n str1 : %s\n str2 : %s\n",ptr1,ptr2);
        break;
        }
        
        
    }
}