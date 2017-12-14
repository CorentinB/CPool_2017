##
## EPITECH PROJECT, 2017
## CPool_infinadd_2017
## File description:
## Display the sum of two number given as string as parameters
##

NAME	= infinadd

CC	= gcc

PLIB 	= lib/my/libmy.a

RM	= rm -f

SRCS	= ./src/*

CFLAGS = -I
CFLAGS += -W -Wall -Wextra -pedantic -g3

all: $(NAME)

$(NAME): $(PBLIB) $(SRCS)
	 cd lib/my/ && make && cd - && $(CC) $(SRCS) $(PLIB) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re