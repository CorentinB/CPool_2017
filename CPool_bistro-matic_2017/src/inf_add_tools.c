/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** Used for the program that performs an infint addition
*/

#include "../include/my.h"
#define VAL(x) ((x) - '0')
#define LAV(x) ((x) + '0')

char *neg_diff_size(var_t *v, char const *op1, char const *op2)
{
	while (v->count2 >= 0) {
		if (VAL(op2[v->count2]) >= v->carry) {
			v->result[v->j] = op2[v->count2] - v->carry;
			v->carry = 0;
		} else {
			v->result[v->j] = op2[v->count2] + 10 - v->carry;
			v->carry = 1;
		}
		v->count2--;
		v->j++;
	}
	return (v->result);
}

char *neg_diff_size2(var_t *v, char const *op1, char const *op2)
{
	while (v->count >= 0) {
		if (VAL(op1[v->count]) >= v->carry) {
			v->result[v->j] = op1[v->count] - v->carry;
			v->carry = 0;
		} else {
			v->result[v->j] = op1[v->count] + 10 - v->carry;
			v->carry = 1;
		}
		v->count--;
		v->j++;
	}
	return (v->result);
}

char *infin_neg3(char const *op1, char const *op2, var_t *v)
{
	v->result = malloc(sizeof(v->result) * my_strlen(op1) + my_strlen(op2));
	while (v->count >= 0 && v->count2 > 0) {
		if (op1[v->count] < op2[v->count2]) {
			v->tmp = VAL(op1[v->count]) + 10 - VAL(op2[v->count2]);
			v->tmp = v->tmp - v->carry;
			v->carry = 1;
			v->result[v->j] = LAV(v->tmp);
		} else {
			v->tmp = VAL(op1[v->count]) - VAL(op2[v->count2]);
			v->tmp = v->tmp - v->carry;
			v->carry = 0;
			v->result[v->j] = LAV(v->tmp);
		}
		v->count--;
		v->count2--;
		v->j++;
	}
	neg_diff_size2(v, op1, op2);
	cut_zero(v);
	return(v->result);
}

char *infin_neg2(char const *op1, char const *op2, var_t *v)
{
	v->result = malloc(sizeof(v->result) * my_strlen(op1) + my_strlen(op2));
	while (v->count > 0 && v->count2 >= 0) {
		if (op1[v->count] > op2[v->count2]) {
			v->tmp = VAL(op2[v->count2]) + 10 - VAL(op1[v->count]);
			v->tmp = v->tmp - v->carry;
			v->carry = 1;
			v->result[v->j] = LAV(v->tmp);
		} else {
			v->tmp = VAL(op2[v->count2]) - VAL(op1[v->count]);
			v->tmp = v->tmp - v->carry;
			v->carry = 0;
			v->result[v->j] = LAV(v->tmp);
		}
		v->count--;
		v->count2--;
		v->j++;
	}
	neg_diff_size(v, op1, op2);
	cut_zero(v);
	return (v->result);
}
