/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Check if the ops string contain two identical operators
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

void check_ops_2(char *ops, char operator)
{
	int j = 0;

	for (int i = 0; i < my_strlen(ops); i++) {
		if (operator == ops[i])
			j++;
	}
	if (j > 1) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}

void check_ops(char *ops)
{
	if (my_strlen(ops) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
	for (int i = 0; i < my_strlen(ops); i++) {
		check_ops_2(ops, ops[i]);
	}
}
