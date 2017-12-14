##
## EPITECH PROJECT, 2017
## CPool_Day12_2017
## File description:
## Makefile for cat
##

NAME	= cat

CC	= gcc

PLIB 	= ../lib/my/libmy.a

RM	= rm -f

SRCS	= ./main.c \
	./cat.c \

CFLAGS = -I
CFLAGS += -W -Wall -Wextra -pedantic

all: $(NAME)

$(NAME): $(PBLIB) $(SRCS)
	 $(CC) $(SRCS) $(PLIB) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re