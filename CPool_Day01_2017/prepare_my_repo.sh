#!/bin/bash
blih -u corentin.barreau@epitech.eu repository create $1
blih -u corentin.barreau@epitech.eu repository setacl $1 ramassage-tek r
blih -u corentin.barreau@epitech.eu repository getacl $1
