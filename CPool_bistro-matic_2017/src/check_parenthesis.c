/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Function to check for parenthesis problems in the expression
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

void check_parenthesis(char *expr)
{
	int opened = 0;
	int closed = 0;

	for (int i = 0; i < my_strlen(expr); i++) {
		if (expr[i] == '(')
			opened++;
		else if (expr[i] == ')')
			closed++;
	}
	if (opened != closed) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_READ);
	}
}
