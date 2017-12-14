/*
** EPITECH PROJECT, 2017
** CPool_evalexpr_2017
** File description:
** Evaluate expression given as parameter
*/

#include "my.h"

int main(int ac, char **av)
{
	if (ac == 2) {
		my_put_nbr(eval_expr(av[1]));
		my_putchar('\n');
		return (0);
	}
	return (84);
}
