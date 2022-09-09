#!/bin/bash

if [[ -z $1 ]]; then
        exit 1
fi

RES=1 

if [[ $1 -le 0 ]]; then
        RES=0
fi

VAL=$1

while [[ $VAL -gt 0 ]]; do
        RES=$((VAL*RES))
        ((VAL--))
done

printf "$RES\n"
exit 0