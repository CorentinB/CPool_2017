/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Inf_div.c - Perform division with inf numbers
*/

#include "../include/my.h"
#define SIZE (sizeof(char) * (my_strlen(op1) + my_strlen(op2)) + 1)
#define COMPARE compare_numbers(reste, op2)
#define VAL(x) (x - '0')
#define ASCII(x) (x + '0')

char *inf_div(char *op1, char *op2, int type)
{
	char *quotient = malloc(SIZE);
	char *reste = malloc(SIZE);

	quotient[0] = '0';
	reste = op1;
	if (my_strlen(op2) == 2 && op2[0] == '0')
		return (84);
	while (COMPARE == 1 || COMPARE == 2) {
		quotient = inf_add(quotient, "1");
		reste = inf_sum(reste, op2);
	}
	if (type == 0)
		return (quotient);
	else if (type == 1)
	 	return (reste);
	else
		return (84);
}
