/*
** EPITECH PROJECT, 2017
** CPool_infinadd_2017
** File description:
** Make the sum of two number given as parameters
*/

#include <stdlib.h>
#include "include/my.h"
#define NUM(x) (x - '0')
#define ASCII(x) (x + '0')

char infin_add(char *op1, char *op2)
{
	char *result;
	int carry = 0;
	char *bigger;
	char *smaller;
	int zero = 0;

	result = malloc(sizeof(char) * maloc_it(op1, op2));
	op1 = my_revstr(op1);
	op2 = my_revstr(op2);
	if (my_strlen(op1) > my_strlen(op2)) {
		bigger = op1;
		smaller = op2;
	} else if (my_strlen(op1) < my_strlen(op2)) {
		bigger = op2;
		smaller = op1;
	}
	if (my_strlen(op1) == my_strlen(op2)) {
		bigger = op1;
		smaller = op2;
	}
	for (int l = 0; l < my_strlen(bigger); l++) {
		result[l] = ASCII(NUM(bigger[l]) + NUM(smaller[l]) + carry);
		if (NUM(result[l]) > 9) {
			carry = NUM(result[l]) - 9;
			result[l] = ASCII(NUM(result[l]) - carry);
		}
	}
	result = my_revstr(result);
	while (result[zero] == '0')
		zero++;
	result = my_revstr(result);
	zero = my_strlen(result) - 2;
	if (result[zero] != 0)
		result[zero] = '\0';
	result = my_revstr(result);
	my_putstr(result);
	return (0);
}