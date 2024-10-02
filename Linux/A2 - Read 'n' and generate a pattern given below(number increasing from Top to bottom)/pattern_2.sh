#!/bin/bash

<<DOC
Name: Sachin Belavi
Date: 19/07/2023
Description:Read 'n' and generate a pattern given below(number increasing from top to bottom)
Sample Input:4
Sample Output:1
              2 3
              4 5 6
              7 8 9 10
DOC


read -p "Enter the number :" n #Reading a number from user
cnt=1  #Assining a variable
#Initialising for loop
for i in `seq $n` #Outer for loop for rows
do
for j in `seq $i` #inner for loop for columns
do
echo -n "$cnt " #Displaying the number
cnt=$(($cnt+1)) #Addition of number
done
echo #Displaying spaces
done
