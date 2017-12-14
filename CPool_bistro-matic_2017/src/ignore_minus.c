/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Used for the program that performs an infint addition
*/

#include "../include/my.h"

char *ignore_minus(char const *op1, char const *op2, var_t *v)
{
	if (op1[v->count] == '-')
		v->count--;
	if (op2[v->count2] == '-')
		v->count2--;
	return(v->result);
}
