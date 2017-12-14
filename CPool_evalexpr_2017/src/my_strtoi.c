/*
** EPITECH PROJECT, 2017
** my_strtoi
** File description:
** my_strtoi
*/

#include "my.h"

int my_strtoi(char const *str)
{
	int sign;
	int nb_start;
	int nb_end;
	int n;
	int i;

	if (str[0] == '\0') {
		return (0);
	}
	sign = 1;
	nb_start = -1;
	nb_end = -1;
	i = my_strtoi_parse(str, &nb_start, &nb_end, &sign);
	if (nb_start != -1 && nb_end == -1) {
		nb_end = i;
	}
	if (nb_end - nb_start > 10) {
		return (0);
	}
	n = my_strtoi_add(str, nb_start, nb_end, sign);
	return (n);
}

int my_strtoi_parse(char *str, int *nb_start, int *nb_end, int *sign)
{
	char c;
	int i;

	i = 0;
	while (str[i] != '\0' && *nb_end == -1) {
		c = str[i];
		if (c == '-' && *nb_start == -1) {
			*sign = *sign * -1;
		}
		else if (c >= '0' && c <= '9') {
			if (*nb_start == -1 && c != '0') {
				*nb_start = i;
			}
		}
		else if (c != '+' || *nb_start != -1) {
			*nb_end = i;
		}
		i++;
	}
	return (i);
}

int my_strtoi_add(char *str, int nb_start, int nb_end, int sign)
{
	int n = 0;
	int pn = 0;
	int i;
	int dec = 1;

	i = nb_end - 1;
	while (i >= nb_start) {
		n = n + (sign * (str[i] - '0') * dec);
		if (sign == 1 && n < pn) {
			return (0);
		} else if (sign == -1 && n > pn) {
			return (0);
		}
		pn = n;
		dec = dec * 10;
		i--;
	}
	return (n);
}
