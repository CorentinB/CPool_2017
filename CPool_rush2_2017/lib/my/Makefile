##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

OBJ	=	$(SRC:.c=.o)

libmy.a:
	gcc -c *.c
	ar rc libmy.a *.o
	cp libmy.a ../libmy.a
	cp my.h ../../include/my.h
	rm *.o

clean:
	rm -f $(OBJ)
