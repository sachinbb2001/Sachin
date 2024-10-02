#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:20/07/2023
Description:Display the longest and shortest user names on the system
Sample Input:./argest_username.sh
Sample Output:The Longest Name is:
              The Shortest Name is:
DOC

arr=(`cat /etc/passwd |cut -d ":" -f1`) #storing user names in the array
short=${arr[0]} #intialising short name as first index in array
long=${arr[0]}  #initialising long name as first index in array
for i in ${arr[@]} #run loop for entered string

do
    if [ ${#short} -gt ${#i} ] #check condition
    then
        short=$i #storing shortest name
    fi
        if [ ${#long} -lt ${#i} ]  #check condition
        then
            long=$i #storing largest name
        fi
done
echo "The Longest Name is: $long"  #displaying longest name
echo "The Shortest Name is: $short" #displaying shortest name