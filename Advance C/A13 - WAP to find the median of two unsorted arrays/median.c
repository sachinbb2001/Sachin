#include<stdio.h>
/*
Name: Sachin Belavi
Date: 17/08/2023
Title:WAP to find the median of two unsorted arrays
Sample Input:Enter the 'n' value for Array A: 5
             Enter the 'n' value for Array B: 5
             
             Enter the elements one by one for Array A: 3 2 8 5 4
             Enter the elements one by one for Array B: 12 3 7 8 5
Sample Output:Median of array1 : 4
              Median of array2 : 7
              Median of both arrays : 5.5      
*/
int main()
{
    int A,B,i,temp;                             //Take value from the user
    float median1,median2,median3,sum,add;
    
    printf("enter the 'n' value of array A:\n");
    scanf("%d",&A);                                 //read the size of 1st array
    printf("enter the 'n' value of array B:\n");
    scanf("%d",&B);                                //read the size of 2nd array
    
    int array1[A],array2[B];                       
    printf("Enter the elements one by one for Array A:\n");        
    for(i = 0; i < A; i++)
    {
       scanf("%d",&array1[i]);
    }
    printf("Enter the elements one by one for Array B:\n");
    for(i = 0; i < B; i++)
    {
       scanf("%d",&array2[i]);
    }
    for(i = 0; i < A; i++)                                 //sorting the given array elements using bubble sort
    {
       for(int k = i + 1; k < A; k++)                    
       {
           if(array1[i] > array1[k])
           {
               temp = array1[i];                          //swaping array elements
               array1[i] = array1[k];
               array1[k] = temp;
           }
           else
           {
               continue;  
           }
       }
   }
   if(A % 2 == 0)   //condition to check given array is even or odd
   {
       add=(float)       //operation to find a median of array1
       array1[A / 2] + array1[(A / 2) - 1];
       median1 = add / 2;
       printf("Median of array1:%g\n",median1);
   }
   else
   {
       median1 = array1[A / 2];
       printf("Median of array1:%g\n",median1);
   }
   for(i = 0; i < B; i++)            //sort the given array elements using bubble sort
   {
       for(int k = i + 1; k < B; k++)
       {
       if(array2[i] > array2[k])
       {
          temp = array2[i];           //swaping array element
          array2[i] = array2[k];
          array2[k] = temp;   
       }
       else
       {
           continue;
       }
   }
}
if(B % 2 == 0)    //condition to check given array size is even or odd
{
    sum = (float)  //operation to find a median of array2
    array2[B / 2] + array2[(B / 2) - 1];
    median2 = sum / 2;
    printf("Median of array2:%g\n",median2);
}
else
{
    median2 = array2[B / 2];        //operation to find median of array2
    printf("Median of array2:%g\n",median2);
}
median3 = (median1 + median2) / 2;     //opertion to find a median of the both array1 and array2
printf("Median of both arrays:%g\n",median3);
}