/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Function to get the expression given with stdin
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

char *get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
	expr = malloc(size + 1);
	if (expr == 0) {
		my_putstr(ERROR_MSG);
		exit(EXIT_MALLOC);
	}
	if (read(0, expr, size) != size) {
		my_putstr(ERROR_MSG);
		exit(EXIT_READ);
	}
	check_parenthesis(expr);
	if (my_strlen(expr) == 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_READ);
	}
	expr[size] = 0;
	return (expr);
}
