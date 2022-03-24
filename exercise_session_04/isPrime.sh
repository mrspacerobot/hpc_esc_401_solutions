#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Not enough arguments supplied"
    echo "usage: ./isprime.sh <number>"
    exit 1
fi

re='^[0-9]+$'
if ! [[ $1 =~ $re ]] ; then
   echo "ERROR: The given input is not a number:" $1
   exit 1
fi

if [ $1 == 0 ]; then
    echo the argument is zero, not a prime
    exit 1
fi

if [ $1 == 1 ]; then
    echo the argument is one, not a prime
    exit 1
fi

result=$(factor $1 | wc -w)

if [ $result -gt 2 ]; then
    echo $1 is composite
else
    echo $1 is prime
fi
