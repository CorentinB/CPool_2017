##
## EPITECH PROJECT, 2017
## CPool_evalexpr_2017
## File description:
## Makefile
##

.PHONY: clean fclean re

SRC= ./*.c

OBJ= *.o

CFLAGS= -W -Wall -Wextra -pedantic -g3

NAME= eval_expr

all: lib $(NAME)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC) -I./include

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L./lib/my -lmy

re: fclean all

temp:
	find . -name "*[#,~]" -type f -delete

clean: temp
	rm $(OBJ)

fclean: clean
	rm $(NAME)

lib : Makefile
	make -C lib/my
