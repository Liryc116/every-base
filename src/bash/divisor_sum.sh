#!/bin/bash

SUM=1
I=2
N=$1

while [[ $(($I*$I)) -le $N ]]; do
    if [[ $N%$I -eq 0 ]]; then
        SUM=$(($(($I+$(($N/$I))))+$SUM))
    fi
    I=$(($I+1))
done

printf "$SUM"