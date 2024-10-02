#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:24/07/2023
Description:Shell script to convert string lower to upper and upper to lower
Sample Input:
Sample Output:
DOC

if [ $# -eq 1 ] #to check the user has entered file name or not
then
    if [ -s $1 ]  #to check user passed file is empty or not
    then
        echo "Lower to Upper=1"
        echo "Upper to Lower=2"
        read -p "please select option : " a  #select option from above mentioned either 1 or 2
        case $a in
           1)
            upper=`cat $1|tr [:lower:] [:upper:]` #translate the content of file lower to upper
            echo "$upper"
            ;;
           2)
            lower=`cat $1|tr [:upper:] [:lower:]`   #translate the content of file upper to lower
            echo "$lower"
            ;;
    esac
else
    echo "Error: No contents inside the file." #print error statement
    fi
else
    echo "Error : Please pass the file name through command line."
fi