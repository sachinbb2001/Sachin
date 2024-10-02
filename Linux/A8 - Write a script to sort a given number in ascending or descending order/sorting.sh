 #!/bin/bash
<<DOC
Name: Sachin Belavi
Date:31/07/2023
Description:write a script to sort a given number in ascending or decending
Sample Input:
Sample Output:
DOC
if [ $# -ne 0 ]                                        #check for command line argument passed or not
then
    array=($@)                                             #Store the command line argument  in an array
    opt=$1
    case $opt in                                        #case statement for Ascending and descending
               -a)
                  for i in `seq $(($#-1))`                          #Ascending given Array
                  do
                  for j in `seq 1 $(($#-$i-1))`
                  do
 if [ ${array[$j]} -gt ${array[$(($j+1))]} ]   #if  array number grater than next number swap number
then
 large=${array[$j]}
 array[$j]=${array[$(($j+1))]}
 array[$(($j+1))]=$large
 fi
done
done
echo "Ascending order of array is ${array[@]:1} "      #Display the given array in Ascending order
;;
-d)
    for i in `seq $(($#-1))`                             #Case statement for descending order
do
    for j in `seq 1 $(($#-$i-1))`
       do
if [ ${array[$j]} -lt ${array[$(($j+1))]} ]    #Condition for the value less than next value
then
    small=${array[$j]}                             #If less than swap the values and store it in array
    array[$j]=${array[$(($j+1))]}
    array[$(($j+1))]=$small
fi
done
done
echo "Descending order of array is ${array[@]:1}"      #Display ths descending order of array
;;
*)
    echo "Error : Please pass the choice."
    echo "Usage : ./sorting -a/-d 4 23 5 6 3"
    ;;
esac
else
    echo "Error : Please pass the argument through command line."
    echo "Usage : ./sorting -a/-d 4 23 5 6 3"
fi