#!/bin/bash
<<DOC
Name: Sachin Belavi
Date: 19/07/2023
Description:Write a script to print chess board 
Sample Input:./chess_board.sh
Sample Output:chess board is print
DOC

#intialising for loop
for i in `seq 8` #outer for for rows
do
for j in `seq 8` #inner for loop for columns
do
n=$(($i+$j)) #Adding rows and columns
m=$(($n % 2))  #modulus of rows and columns
if [ $m -eq 0 ] #if condition used to check even or add
then
echo -e -n "\e[47m" " " #TO print a white box for even condition
else
echo -e -n "\e[40m" " " #To print a black box for odd condition
fi
done
echo -e "\e[0m" " " #To make it normal
done