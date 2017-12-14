/*
** EPITECH PROJECT, 2017
** inf_mul
** File description:
** Inf mult
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#define LENGTH (my_strlen(op1) + my_strlen(op2) + 1)
#define VAL(x)(x - '0')
#define ASCII(x)(x + '0')

char *carrycalc(char *op1, char *op2)
{
	char *result;
	int i;
	int j;
	char carry;

	if (result [i + j] >= 10) {
		result[i + j] = result[i + j] % 10;
		carry = carry + 1;
	}
}

char *positive(char *op1)
{
	char *posi;
	int i = 0;
	int j = 0;

	posi = malloc(sizeof(char) * (my_strlen(op1)));
	if (op1[j] == '-') {
		j = j + 1;
		while (op1[j] != '\0') {
			posi[i] = op1[j];
			i = i + 1;
			j = j + 1;
		}
		return (posi);
	}
	return (op1);
}

char *ascii_value(char *result, char *op1temp, char *op2temp)
{
	int k;

	if (result[-1] != 0)
		my_put_nbr(result[-1]);
	for (k = 0; k < my_strlen(op1temp) - 1 + my_strlen(op2temp); k++)
		result[k] = ASCII(result[k]);
	result[k + 1] = '\0';
	return(result);
}

char *inf_mul(char *op1, char *op2)
{
	char *result = malloc(sizeof(*result) * LENGTH);
	char carry;
	char temp;
	char *op1temp = positive(op1);
	char *op2temp = positive(op2);;
	int i;
	int j;

	for (i = my_strlen(op1temp) - 1; i >= 0; i--) {
		for (j = my_strlen(op2temp) - 1; j >= 0; j--) {
			temp = VAL(op1temp[i]) * VAL(op2temp[j]) + carry;
			carry = 0;
			result[i + j] += temp % 10;
			carrycalc(op1, op2);
			carry += temp / 10;
		}
		result[i + j] += carry;
		carry = 0;
	}
	return (ascii_value(result, op1temp, op2temp));
}

char *sign(char *op1, char *op2)
{
	char *result;
	char *result2;
	int i = 0;
	int j = 1;

	result = inf_mul(op1, op2);
	result2 = malloc(sizeof(char) * (my_strlen(result2)));
	if ((op1[0] != '-') && (op2[0] != '-'))
		return (result);
	if ((op1[0] == '-') && (op2[0] == '-')) {
		return (result);
	} else {
		result2[0] = '-';
		while (result[i] != '\0') {
			result2[j] = result[i];
			i = i + 1;
			j = j + 1;
		}
		return (result2);
	}
}
