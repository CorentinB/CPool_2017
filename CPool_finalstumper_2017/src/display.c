/*
** EPITECH PROJECT, 2017
** CPool_finalstumper_2017
** File description:
** Display function for rush 3
*/

#include "../include/my.h"

void size(int width, int height) {
	my_put_nbr(width);
	my_putchar(' ');
	my_put_nbr(height);
}

void display(char *type, int width, int height) {
	if (type[0] == '1') {
		my_putstr("[rush1-3] ");
		size(width, height);
		my_putstr(" || ");
		my_putstr("[rush1-4] ");
		size(width, height);
		my_putstr(" || ");
		my_putstr("[rush1-5] ");
		size(width, height);
	} else if (type[0] != '1') {
		my_putstr(type);
		size(width, height);
	}
	my_putchar('\n');
}
