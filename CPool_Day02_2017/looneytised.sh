#!/bin/bash

sed 's/theo1/Wile\ E.\ Coyote/g; s/steven1/Daffy\ Duck/g; s/arnaud1/Porky\ Pig/g; s/pierre-jean/Marvin\ the\ Martian/g' | grep -e 'Wile\ E.\ Coyote' -e 'Daffy\ Duck' -e 'Porky\ Pig' -e 'Marvin\ the\ Martian'
