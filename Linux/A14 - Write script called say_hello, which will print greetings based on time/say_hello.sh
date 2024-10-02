#!/bin/bash

<<DOC
Name: Sachin Belavi
Date:24/07/2023
Description:Write script called say_hello, which will print greting based on time
Sample Input:
Sample Output:
DOC

hour=`date|cut -d " " -f4 |cut -d ":" -f1`   #it fetch the hour from date cmd
day=`date "+%A"|cut -d " " -f1`              #it fetch the day from date cmd
date=`date|cut -d " " -f3`                   #it fetch the date from date cmd
month=`date "+%B"|cut -d " " -f2`            #it fetch the month from date cmd
year=`date|cut -d " " -f6`                   #it fetch the year from date cmd
time=`date|cut -d " " -f4`                   #it fetch the time from date cmd

if [ $hour -ge 5 -a $hour -lt 12 ]
then
echo -e "Good Morning `whoami`, Have nice day!\nThis is $day $date in $month of $year($hour AM)"
elif [ $hour -ge 12 -a $hour -lt 14 ]
then
    echo -e "Good noon `whoami`, Have nice day!\nThis is $day $date in $month of $year($time PM)"
elif [ $hour -ge 14 -a $hour -lt 17 ]
then
    echo -e "Good afternoon `whoami`, Have nice day!\nThis is $day $date in $month of $year($time PM)"
elif [ $hour -ge 17 -a $hour -lt 20 ]
then
    echo -e "Good evening `whoami`, Have nice day!\nThis is $day $date in $month of $year($time PM)"
elif [ $hour -ge 20 -o $hour -lt 5 ]
then
  echo -e "Good night `whoami`, Have nice day!\nThis is $day $date in $month of $year($time PM)"
fi