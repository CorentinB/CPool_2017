#!/bin/bash

if [ $1 ]
then
	cut -d: -f 5 | cut -d" " -f 2 | grep -i "^$1" | wc -l
else
	echo "Enter a name."
fi
