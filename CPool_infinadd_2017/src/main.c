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

int main(int argc, char *argv[])
{
	char *op1 = argv[1];
	char *op2 = argv[2];
	char *result;

	infin_add(op1, op2);
	return (0);
}