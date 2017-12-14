#!/bin/bash

sed -ne '0~2p' | cut -d: -f 1 | rev | sort -r | sed -ne "$MY_LINE1,$MY_LINE2 p" | tr '\n' ',' | sed -e 's/,/,\ /g; s/,\ $/.\n/g'
