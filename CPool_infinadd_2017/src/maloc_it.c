/*
** EPITECH PROJECT, 2017
** CPool_infinadd_2017
** File description:
** Return the length of the bigger string
*/

#include <stdlib.h>
#include "include/my.h"
#define NUM(x) (x - '0')
#define ASCII(x) (x + '0')

int maloc_it(char *op1, char *op2)
{
	if (*op1 > *op2)
		return (my_strlen(op1) + 1);
	else if (*op2 > *op1)
		return (my_strlen(op2) + 1);
	if (*op1 == *op2)
		return (my_strlen(op1) + 1);
	return (-1);
}