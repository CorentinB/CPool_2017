/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Check the base for error
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

void check_base_3(char *base, char digit)
{
	int j = 0;

	for (int i = 0; i < my_strlen(base); i++) {
		if (digit == base[i])
			j++;
	}
	if (j > 1) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}

void check_base_2(char base, char *ops)
{
	for (int i = 0; i < my_strlen(ops); i++) {
		if (base == ops[i]) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_BASE);
		}
	}
}

void check_base(char *base, char *ops)
{
	if (my_str_isprintable(base) == 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
	for (int i = 0; i < my_strlen(base); i++) {
		check_base_2(base[i], ops);
		check_base_3(base, base[i]);
	}
}
