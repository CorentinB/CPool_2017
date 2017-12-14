/*
** EPITECH PROJECT, 2017
** CPool_evalexpr_2017
** File description:
** Check if the expression given is ok.
*/

#include "my.h"

int check_expr(char *str)
{
	int test = 0;

	for (int i = 0; i < my_strlen(str); i++) {
		if (str[i] > 47 && str[i] < 58 || str[i])
			i++;
		if (str[i] == '(' || str[i] == ')' || str[i] == '+')
			i++;
		if (str[i] == '-' || str[i] == '/' || str[i] == '%')
			i++;
		if (str[i] == '*')
			i++;
	}
	return (0);
}
