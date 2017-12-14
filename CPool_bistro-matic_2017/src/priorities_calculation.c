/*
** EPITECH PROJECT, 2017
** priorities_calculation.c
** File description:
** File wich contains priorities calculation functions
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>

void my_itoa(int n, char s[])
{
	int i;
	int sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	my_revstr(s);
}

char *replace_string(char *str, char *to_replace, int i, int j)
{
	char *dest;
	int count = 0;
	int count2 = 0;
	int count3 = 1;

	dest = malloc(sizeof(char) * my_strlen(str));
	while (count != i) {
		dest[count] = str[count];
		count++;
	}
	while (to_replace[count2] != 0) {
		dest[count] = to_replace[count2];
		count++;
		count2++;
	}
	while (str[j + count3] != 0) {
		dest[count] = str[j + count3];
		count++;
		count3++;
	}
	return (dest);
}

char *__eval_expr(char *str, int op_par, int cls_par)
{
	int opar_i = my_strlen(str) - 1;
	int cpar_i = 0;
	char *res =  malloc(sizeof(char) * my_strlen(str) + 1);
	char *result;
	char *buff;

	buff = malloc(sizeof(char) * my_strlen(str));
	opar_i = get_opening_par(str);
	cpar_i = get_closing_par(str, opar_i);
	if (opar_i != op_par && cpar_i != cls_par)
		str = __eval_expr(str, opar_i, cpar_i);
	opar_i = get_opening_par(str);
	cpar_i = get_closing_par(str, opar_i);
	buff = my_strncpy(buff, str + opar_i + 1, cpar_i - 1 - opar_i);
	res = do_calc(buff);
	str = replace_string(str, res, opar_i, cpar_i);
	return (str);
}

char *eval_expr(char *str)
{
	char *dest;

	dest = malloc(sizeof(char) * 2147483647);
	dest = put_parenthesis(str);
	for (; is_parenthesis(dest) == 1; )
		dest = __eval_expr(dest, 0, my_strlen(dest) - 1);
	return(dest);
}
