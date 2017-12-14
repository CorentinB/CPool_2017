/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Main function for the project
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	unsigned int size;
	char *expr;

	if (ac != 4) {
		my_putstr("Usage: ");
		my_putstr(av[0]);
		my_putstr(" base ops\"()+-*/%\" exp_len\n");
		return (EXIT_USAGE);
	}
	check_ops(av[2]);
	check_base(av[1], av[2]);
	size = my_atoi(av[3]);
	expr = get_expr(size);
	my_putstr(eval_expr(expr));
	return (EXIT_SUCCESS);
}
