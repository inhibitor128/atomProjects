#!/bin/bash

#Generate random number 1 - 10#
rand=$(( $RANDOM % 10 + 1 ))

if [ $rand -ge 5 ];
	then
	echo "Heads"
	else
	echo "Tails"
fi

#num1 -eq num2 check if 1st  number is equal to 2nd number
#num1 -ge num2 checks if 1st  number  is greater than or equal to 2nd number
#num1 -gt num2 checks if 1st  number is greater than 2nd number
#num1 -le num2 checks if 1st number is less than or equal to 2nd number
#num1 -lt num2 checks if 1st  number  is less than 2nd number
#num1 -ne num2 checks if 1st  number  is not equal to 2nd number
