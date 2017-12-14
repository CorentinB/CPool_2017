#!/bin/bash

if [ $1 ]
then
	cut -d\; -f 3 | grep -i $1 | wc -l
else
	wc -l
fi
