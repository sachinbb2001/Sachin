#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:19/07/2023
Description:write a script for arithmetic calculator using cl arguments
Sample Input:./arithmatic_calc.sh 25 + 41
Sample Output:25 + 41 = 66
DOC

if [ $# -gt 0 ]  #checking the condition
then
if [ $# -eq 3 ] #check the condition
then
case $2 in
  +)
    add=`echo "$1 + $3" |bc`   #addition operation 
    echo $1 $2 $3 = $add  #executing addition operation  
  ;;
  -)
    sub=`echo "$1 - $3" |bc`   #substraction operation
    echo $1 $2 $3 = $sub  #executing substraction operation
  ;;
  x)
    mul=`echo "$1 * $3" |bc`   #multiplication opeartion
    echo $1 $2 $3 = $mul  #execute multiplication operation
  ;;
  /)
    div=`echo "scale=2; $1 / $3" |bc`  #division operation
    echo $1 $2 $3 = $div          #execution division operation
  ;;
  *)
    echo "Not matching" 
  ;;
esac
else
    echo "Error:Please pass 3 arguments.
    usage:./arithmatic_calc.sh 2.3 + 6.7"   #if condition failed print error statement
fi
else
    echo "Error : Please pass the arguments through command line.
    usage:./arithmatic_calc.sh 2.3 + 6.7"
fi