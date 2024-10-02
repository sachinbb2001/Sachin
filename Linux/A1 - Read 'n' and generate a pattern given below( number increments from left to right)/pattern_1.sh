#!/bin/bash  

<<DOC
Name: Sachin Belavi 
Date:18/07/2023
Description:Reading 'n' and generating a pattern given below(number increments from left to right)
Sample Input:2 
Sample Output:1
              1 2
DOC

read -p "Enter the number :" n #Reading a number from user
#Initialising for loop
for i in `seq $n` #outer for loop for rows  
do 
for j in `seq $i` #inner for loop for columns
do 
echo -n "$j " #Displaying the number    
done 
echo #Displaying space                                                                     
done