/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** a program that performs an infint addition
*/

#include "../include/my.h"
#include <stdlib.h>
#define VAL(x) ((x) - '0')
#define LAV(x) ((x) + '0')

char *cut_zero(var_t *v)
{
	my_revstr(v->result);
	for (v->j = 0; v->result[v->j] == '0'; v->j++) {
	}
	v->j = my_strlen(v->result) - v->j;
	my_revstr(v->result);
	if (v->j != 0)
		v->result[v->j] = 0;
	v->result[v->j + 1] = 0;
	return (v->result);
}

char *carry_stop(var_t *v)
{
	if (v->carry != 0 && v->count2 < 0 && v->count < 0) {
			v->result[v->j] = '1';
			v->carry = 0;
	}
}

char *infin_carry(var_t *v, char const *op1, char const *op2)
{
	while (v->carry != 0) {
		ignore_minus(op1, op2, v);
		carry_stop(v);
		if (v->carry != 0 && v->count >= 0) {
			v->tmp = VAL(op1[v->count]) + v->carry;
			v->carry = v->tmp / 10;
			v->result[v->j] = LAV(v->tmp % 10);
			v->count--;
		}
		ignore_minus(op1, op2, v);
		if (v->carry != 0 && v->count2 >= 0) {
			v->tmp = VAL(op2[v->count2]) + v->carry;
			v->carry = v->tmp / 10;
			v->result[v->j] = LAV(v->tmp % 10);
			v->count2--;
		}
		ignore_minus(op1, op2, v);
		v->j++;
	}
	return(v->result);
}

char  *infin_add(char const *op1, char const *op2, var_t *v)
{
	v->result = malloc(sizeof(v->result) * my_strlen(op1) + my_strlen(op2));
	while (v->count2 >= 0 && v->count >= 0) {
		v->tmp = VAL(op1[v->count]) + VAL(op2[v->count2]) + v->carry;
		v->carry = v->tmp / 10;
		v->result[v->j] = LAV(v->tmp % 10);
		v->count2--;
		v->count--;
		v->j++;
		ignore_minus(op1, op2, v);
	}
	v->result = infin_carry(v, op1, op2);
	v->result = add_diff_size(v, op1, op2);
	cut_zero(v);
	return (v->result);
}

void init_variables(var_t *v, char const *op1, char const *op2)
{
	v->count = my_strlen(op1) - 1;
	v->count2 = my_strlen(op2) - 1;
	v->tmp = 0;
	v->j = 0;
	v->carry = 0;
}

char *inf_add(char const *op1, char const *op2)
{
	var_t v;

	init_variables(&v, op1, op2);
	if (op1[0] == '-' && op2[0] == '-') {
		v.result = infin_add(op1, op2, &v);
		if (v.result[my_strlen(v.result) - 1] != 45) {
			v.result[my_strlen(v.result)] = '-';
			v.result[my_strlen(v.result) + 1] = 0;
		}
	}
	if (op1[0] == '-' || op2[0] == '-') {
		if (op1[0] == '-' && op2[0] != '-')
			v.result = infin_neg2(op1, op2, &v);
		if (op1[0] != '-' && op2[0] == '-')
			v.result = infin_neg3(op1, op2, &v);
	} else {
		v.result = infin_add(op1, op2, &v);
	}
	my_revstr(v.result);
	return(v.result);
}
