/*
** EPITECH PROJECT, 2017
** inf_sum
** File description:
** sum inf
*/

#include "../include/my.h"
#define VAL(x) ((x) - '0')
#define LAV(x) ((x) + '0')

char *cut_zero_sum(varsum_t *s)
{
	my_revstr(s->result);
	for (s->j = 0; s->result[s->j] == '0'; s->j++) {
	}
	s->j = my_strlen(s->result) - s->j;
	my_revstr(s->result);
	if (s->j != 0)
		s->result[s->j] = 0;
	s->result[s->j + 1] = 0;
	return (s->result);
}

char *sum_diff_size(varsum_t *s, char const *op1, char const *op2)
{
	while (s->count >= 0) {
		if (VAL(op1[s->count]) >= s->carry) {
			s->result[s->j] = op1[s->count] - s->carry;
			s->carry = 0;
		} else {
			s->result[s->j] = op1[s->count] + 10 - s->carry;
			s->carry = 1;
		}
		if (op1[s->count] == '-')
			s->result[s->j] = '-';
		s->count--;
		s->j++;
	}
	return (s->result);
}

char *inf_neg(char const *op1, char const *op2, varsum_t *s)
{
	s->result = malloc(sizeof(s->result) * my_strlen(op1) + my_strlen(op2));
	while (s->count >= 0 && s->count2 >= 0) {
		if (op1[s->count] < op2[s->count2]) {
			s->tmp = VAL(op1[s->count]) + 10 - VAL(op2[s->count2]);
			s->tmp = s->tmp - s->carry;
			s->carry = 1;
			s->result[s->j] = LAV(s->tmp);
		} else {
			s->tmp = VAL(op1[s->count]) - VAL(op2[s->count2]);
			s->tmp = s->tmp - s->carry;
			s->carry = 0;
			s->result[s->j] = LAV(s->tmp);
		}
		s->count--;
		s->count2--;
		s->j++;
	}
	sum_diff_size(s, op1, op2);
	cut_zero(s);
	return(s->result);
}


void init_variables_sum(varsum_t *s, char const *op1, char const *op2)
{
	s->count = my_strlen(op1) - 1;
	s->count2 = my_strlen(op2) - 1;
	s->tmp = 0;
	s->j = 0;
	s->carry = 0;
}

char *inf_sum(char const *op1, char const *op2)
{
	varsum_t s;

	init_variables_sum(&s, op1, op2);
	s.result = inf_neg(op1, op2, &s);
	my_revstr(s.result);
	return(s.result);
}
