#!/bin/bash

COUNTER=0

while [[ $COUNTER -le $1 ]]; do
    if [[ $COUNTER%3 -eq 0 ]]; then
        printf "Fizz"
    fi
    if [[ $COUNTER%5 -eq 0 ]]; then
        printf "Buzz"
    elif [[ $COUNTER%3 -ne 0 ]]; then
        printf "$COUNTER"
    fi
    printf "\n"
    ((COUNTER++))
done

exit 0