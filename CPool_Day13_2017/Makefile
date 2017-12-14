##
## EPITECH PROJECT, 2017
## CPool_Day13_2017
## File description:
## Makefile for cat
##

NAME	= csfml

CC	= gcc

PLIB 	= lib/my/libmy.a

RM	= rm -f

SRCS	= ./main.c

CFLAGS = -I
CFLAGS += -W -Wall -Wextra -pedantic

all: $(NAME)

$(NAME): $(PBLIB) $(SRCS)
	 $(CC) -lc_graph_prog $(SRCS) $(PLIB) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re