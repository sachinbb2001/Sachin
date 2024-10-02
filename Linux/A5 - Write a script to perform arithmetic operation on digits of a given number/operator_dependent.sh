#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:19/07/2023
Description:write a script to perform arithmetic operation on digits of a given number
Sample Input:./operator_depender.sh 1234+
Sample Output:10
DOC

if [ $# -eq 1 ] #Condition to check whether the user passed the CL argument or not
then
num="$@" #storing the string passed by user through  CL in variable
a=${num: -1} #storing the operator of the string in a variable a using offset method
b=${num: 0: 1} #storing the first digit of the string in variable b using offset method
case $a in #case statement used to particular opeartion passed by user at the end of string through CL
+)
for i in `seq 1 $((${#num}-2))` #for loop for each digit passed string through CL
do
 b=$((b+${num:$i: 1})) #addition operation
done
 echo "Sum of digits = $b"
  ;;
-)
for i in `seq 1 $((${#num}-2))`
do
 b=$((b-${num:$i: 1})) #substraction opeartion
done
 echo "Subtraction of digits = $b"
  ;;
x)
for i in `seq 1 $((${#num}-2))`
do
 b=$((b*${num:$i: 1})) #multiplication operation
done
 echo "Multiplication of digits = $b"
  ;;
/)
for i in `seq 1 $((${#num}-2))`
do
 b=`echo "scale=2;$b / ${num: $i: 1}"|bc` #division opeartion
done                                                        
 echo "Division of digits = $b"
  ;;
*)
 echo "Error:Operator missing or invalid operator,please pass operator as last digit(+,-,x,/)"
  ;;

esac
else
 echo "Error : Please pass the arguments through CL."
 echo "Usage : ./operator_dependent.sh 2345+"
fi 