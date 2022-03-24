#!/bin/bash

if [ $# -lt 2 ]; then
    echo "Not enough arguments supplied"
    exit 1
fi

if [ ! -f "$1" ]; then
    echo "File does not exist"
    exit 1
fi


if [ $2 -eq 0 ]; then
    sed -i '/^$/d' $1
elif [ $2 -eq 1 ]; then
    sed -i '/^$/d' $1
    sed -i 's/$/\n/g' $1
elif [ $2 -eq 2 ]; then
    sed -i '/^$/d' $1
    sed -i 's/$/\n\n/g' $1
else
    echo "wrong number of lines given"
fi

