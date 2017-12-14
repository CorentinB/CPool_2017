/*
** EPITECH PROJECT, 2017
** computations.c
** File description:
** File wich contains computations functions
*/

#include "../include/my.h"
#include <stdlib.h>

parse_nb_t parse_number(char *str)
{
	parse_nb_t result;
	char *end_ptr;

	result.res = my_get_nbr_str(str, &end_ptr);
	result.expr = end_ptr - 1;
	return (result);
}

parse_nb_t parse_factors(char *str)
{
	parse_nb_t result = parse_number(str);
	char *num1 = result.res;
	char *num2;
	char op;

	for (;;) {
		str = result.expr;
		op = *str;
		if (op != '/' && op != '*' && op != '%')
			return (result);
		str++;
		result = parse_number(str);
		num2 = result.res;
		if (op == '/')
			result.res = inf_div(num1, num2, 0);
		else if (op == '*')
			result.res = inf_mul(num1, num2);
		else
		     	result.res = inf_div(num1, num2, 1);
	}
}

int parse_summands(char *str)
{
	parse_nb_t result = parse_factors(str);
	char *num1 = result.res;
	char *num2;
	char op;

	for (;;) {
		str = result.expr;
		op = *str;
		if (op != '-' && op != '+')
			return (result.res);
		str++;
		result = parse_factors(str);
		num2 = result.res;
		if (op == '-')
			result.res = inf_sum(num1, num2);
		else
		      	result.res = inf_add(num1,num2);
	}
}

int do_calc(char *str)
{
	return (parse_summands(str));
}
