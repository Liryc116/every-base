#!/bin/bash

ROOT=$1

while [[ $(($ROOT*$ROOT)) -gt $1 ]]; do
    ROOT=$(($(($ROOT+$1/$ROOT))/2))
    
done

printf "$ROOT"