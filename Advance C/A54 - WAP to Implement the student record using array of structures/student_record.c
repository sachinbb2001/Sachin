#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Name: Sachin Belavi
Date: 05/11/2023
Title:WAP to Implement the student record using array of structures
Sample Input and output:
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
1              Nandhu        99               91                95                  A
Do you want to continue to display(Y/y) : n
*/
//structure for subjects
struct sub
{
    char subject[20];
    int marks;
};
//structure for student details
struct student
{
    int rollno;
    char name[20];
    float avg;
    char grade;
    struct sub *ptr;
};
int main()
{
    int choice,sum=0;
    char t='y';
    int no_std,no_sub;
    struct student s[no_std];
    printf("Enter the no of students : ");
    scanf("%d",&no_std);
    
    printf("Enter the no of subjects : ");
    scanf("%d",&no_sub);
    
    for(int i=0; i<no_std; i++)
    {
    	s[i].ptr=malloc(no_sub * sizeof(struct sub));
    }
    char temp[20];  
    for(int i=0; i<no_sub; i++)
    {
	    printf("Enter the name of subject %d : ",i+1);
	    getchar();
	    scanf("%s",temp);
	    for(int j=0; j<no_std; j++)
	    {
	        strcpy(s[j].ptr[i].subject,temp);
	    }
    }
    for(int i=0; i<no_std; i++)
    {
        printf("--------Enter the student details--------\n");
	    printf("Enter the Roll no. : ");
	    scanf("%d",&s[i].rollno);
	    printf("Enter the student %d name : ",s[i].rollno);
	    getchar();
	    scanf("%s",s[i].name);
	    {
	        for(int j=0; j<no_sub; j++)
	        {
	            printf("Enter %s marks : ",s[i].ptr[j].subject);
		        scanf("%d",&s[i].ptr[j].marks);
	        }
	    }
    }
    for(int i=0; i<no_std; i++)
    {
        for(int j=0; j<no_sub; j++)
	    {
	        sum= sum + s[i].ptr[j].marks;
	    }
	    s[i].avg = sum / no_sub;    //finding the avg
	    sum=0;
    }
    while(t == 'y')
    {
        printf("l All student details\n2. Particular student details\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);   //reading choice from user
        
        if(choice == 1)   //if choice equal to 1 then display all student details
        {
	        printf("-------Menu for All students-------\n");
	        printf("Roll No. Name\t");
	        for(int i=0; i<no_std; i++)
	        {
	            for(int j=0; j<no_sub; j++)
	            {
		            printf("%s",s[i].ptr[j].subject);
		            printf("\t");
	            }
	            break;
	        }
	        printf("Average\t  Grade\n");
	        for(int i=0; i<no_std; i++)   //print each student details
	        {
	            printf(" %d\t",s[i].rollno);   //print roll number
	            printf("%s\t",s[i].name);      //print name of student
	            for(int j=0; j<no_sub; j++)     //print marks for each subject
	            {
		            printf("%d\t",s[i].ptr[j].marks);
	            }
	            printf("%f\t",s[i].avg);
	            if(s[i].avg >= 90 && s[i].avg <= 100)
		        printf("A");
	            else if(s[i].avg >= 80 && s[i].avg <= 89)
		        printf("B");
	            else if(s[i].avg >= 70 && s[i].avg <= 79)
		        printf("C");
	            else if(s[i].avg >= 60 && s[i].avg < 70)
		        printf("D");
	            else if(s[i].avg < 60)
		        printf("F");
	            printf("\n");
	        }
       }
       else if(choice == 2)   //if choice equal to 2 then displaing particular student details
       {
           int flag=0;
	       int choice1;
	       printf("------Menu for particular student------\n");
	       printf("1. Name\n2.Roll no.\n");
	       printf("Enter your choice : ");
	       scanf("%d",&choice1);
	       if(choice1 == 1)
	       {
	           char temp1[20];
	           printf("Enter the name of the student : ");
	           getchar();
	           scanf("%s",temp1);
	           int k;
	           for( k=0; k<no_std; k++)
	           {
	               if(!(strcmp(s[k].name,temp1)))
	               {
	                   flag=1;
		               printf("Roll No. Name\t");
		               for(int i=0; i<no_std; i++)
		               {
		                   for(int j=0; j<no_sub; j++)
			               {
			                   printf("%s",s[i].ptr[j].subject);
			                   printf("\t");
			               }
			               break;
		               }
		               printf("Average\t   Grade\n");
		               for(int i=k; i<no_std;i++)
		               {
			               printf(" %d\t",s[i].rollno);
			               printf("%s\t",s[i].name);
			               for(int j=0; j<no_sub; j++)
			               {
			                   printf("%d\t",s[i].ptr[j].marks);
			               }
			               printf("%f\t",s[i].avg);
			               if(s[i].avg >= 90 && s[i].avg <= 100)
			               printf("A");
			               else if(s[i].avg >=80 && s[i].avg <= 89)
			               printf("B");
			               else if(s[i].avg >= 70 && s[i].avg < 80)
			               printf("C");
			               else if(s[i].avg >= 60 && s[i].avg < 70)
			               printf("D");
			               else if(s[i].avg < 60)
			               printf("F");
			               printf("\n");
			               break;
		               }
	               }
	               else if(flag == 0)
		           {
		               printf("Entered name not found\n");
		           }
	           }
	       }
	       else if(choice1 == 2)
	       {
	           int temp3;
	           printf("Enter the roll no. of the student : ");
	           scanf("%d",&temp3);
	           int l;
	           for( l=0; l<no_std; l++)
	           {
	               if(s[l].rollno == temp3)
	               {
	                   flag=1;
	                   printf("Roll No. Name\t");
	                   for(int i=0; i<no_std; i++)
		               {
			               for(int j=0; j<no_sub; j++)
			               {
			                   printf("%s",s[i].ptr[j].subject);
			                   printf("\t");
			               }
			               break;
		               }
		               printf("Average\t    Grade\n");
		               for(int i=l; i<no_std;i++)
		               {
		                   printf(" %d\t",s[i].rollno);
		                   printf("%s\t",s[i].name);
		                   for(int j=0; j<no_sub; j++)
			               {
			                   printf("%d\t",s[i].ptr[j].marks);
			               }
			               printf("%f\t",s[i].avg);
			               if(s[i].avg >= 90 && s[i].avg <= 100)
			               printf("A");
			               else if(s[i].avg >= 80 && s[i].avg <= 89)
			               printf("B");
			               else if(s[i].avg >= 70 && s[i].avg < 80)
			               printf("C");
			               else if(s[i].avg >= 60 && s[i].avg < 70)
			               printf("D");
			               else if(s[i].avg <= 60)
			               printf("F");
			               printf("\n");
			               break;
		               }
	               }
	               else if(flag == 0)
		           {
		               printf("Entered roll no not found\n");
		           }
	           }
	       }
       }
       printf("Do you want to display agian (y/n):");
       getchar();
       scanf("%c",&t);
    }
}
