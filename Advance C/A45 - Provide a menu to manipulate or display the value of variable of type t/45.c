#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
/*
Name: Sachin Belavi
Date: 06/11/2023
Title:Provide a menu to manipulate or display the value of variable of type t
Sample Input and output:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
0 -> k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
0 -> k (char)
1 -> 10 (int)
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
*/
int main()
{
    int flag_d=0,flag_c1=0,flag_c2=0,flag_I=0,flag_f=0,flag_s=0;
    int i=0;
    int choice,choice1,choice2;
    void *ptr;
    ptr=calloc(1,8);
    while(flag_d == 0 || (flag_c1==0 && flag_c2==0 && flag_I==0 && flag_f==0 && flag_s == 0))
    {
        printf("Menu:\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
        printf("Choice ---> ");    //reading choice from user
        scanf("%d",&choice);
        __fpurge(stdin);
        switch(choice)     //using case to switch between the choices
        {
            //if user enter the choice 1 then adding element
            case 1:
                printf("Enter the type you have to insert:\n1. int\n2. char\n3. float\n4. double\n5. short\n");
                printf("Choice ---> ");
                scanf("%d",&choice1);
                switch(choice1)
                {
                    case 1:
                        if(flag_d==0 && flag_I==0 && flag_f==0) 
                        {
                            printf("Enter the int:\n");
                            scanf("%d",((int *)ptr+1));
                            __fpurge(stdin);
                            flag_I=1;
                        }
                        else
                        {
                            printf("cannot allocate for int\n");
                        }
                        break;
                    case 2:
                        if(flag_d==0 && flag_c1==0 || flag_c2==0)
                        {
                            if(flag_c1==1)
                            {
                                printf("Enter the char:");
                                scanf(" %c",((char *)ptr+1));
                                __fpurge(stdin);
                                flag_c2=1;
                            }
                            else
                            {
                                printf("Enter the char:");
                                flag_c1=1;
                                scanf(" %c",((char *)ptr));
                                __fpurge(stdin);
                            }
                        }
                        else
                        {
                            printf("cannot allocate for char\n");
                        }
                        break;
                    case 3:
                        if(flag_d==0 && flag_I == 0 && flag_f == 0)
                        {
                            printf("Enter the float:");
                            scanf("%f",((float *)ptr+1));
                            __fpurge(stdin);
                            flag_f=1;
                        }
                        else
                        {
                            printf("cannot allocate for float\n");
                        }
                        break;
                    case 4:
                        if(flag_d==0 && flag_I == 0 && flag_c1 ==0 && flag_c2==0 && flag_f == 0)
                        {
                            printf("Enter the double:");
                            scanf("%lf",((double *)ptr));
                            __fpurge(stdin);
                            flag_d=1;
                        }
                        else
                        {
                            printf("cannot allocate for double\n");
                        }
                        break;
                    case 5:
                        if(flag_d==0 && flag_s == 0)
                        {
                            printf("Enter the short:");
                            scanf("%hd",((short *)ptr+1));
                            __fpurge(stdin);
                            flag_s=1;
                        }
                        else
                        {
                            printf("cannot allocate for short\n");
                        }
                        break;
                }
                break;
            case 2:
                if(flag_c1==1)
                    printf("0 -> %c\n",*((char *)ptr));
                if(flag_c2==1)
                    printf("1 -> %c\n",*((char *)ptr+1));
                if(flag_s== 1)
                    printf("2 -> %hd\n",*((short *)ptr+1));
                if(flag_I==1)
                    printf("3 -> %d\n",*((int *)ptr+1));
                if(flag_f == 1)
                    printf("4 -> %f\n",*((float *)ptr+1));
                if(flag_d==1)
                    printf("5 -> %lf\n",*((double *)ptr));
                printf("Enter the index value to be deleted:");
                scanf("%d",&choice2);
                switch(choice2)
                {
                    case 0:
                        flag_c1=0;
                        break;
                     
                    case 1:
                        flag_c2=0;
                        break;
                        
                    case 2:
                        flag_s=0;
                        break;

                    case 3:
                        flag_I=0;
                        break;
                      
                    case 4:
                        flag_f=0;
                        break;
                        
                    case 5:
                        flag_d=0;
                        break;
                }
                break;
            case 3:
                if(flag_c1 == 1)
                    printf("0 -> %c\n",*(char *)ptr);
                if(flag_c2 == 1)
                    printf("1 -> %c\n",*((char *)ptr+1));
                if(flag_d == 1)
                    printf("5 -> %lf\n",*(double *)ptr);
                if(flag_s == 1)
                    printf("2 -> %hd\n",*((short *)ptr+1));
                if(flag_I == 1)
                    printf("3 -> %d\n",*((int *)ptr+1));
                if(flag_f == 1)
                    printf("4 -> %f\n",*((float *)ptr+1));
                break;
            case 4:
                exit(0);
        }
    }
}