/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Used for the program that performs an infint addition
*/

#include "../include/my.h"

char *add_diff_size(var_t *v, char const *op1, char const *op2)
{
	while (v->count >= 0) {
		v->result[v->j] = op1[v->count];
		v->count--;
		v->j++;
	}
	while (v->count2 >= 0) {
		v->result[v->j] = op2[v->count2];
		v->count2--;
		v->j++;
	}
	return (v->result);
}
