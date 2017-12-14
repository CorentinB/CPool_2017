/*
** EPITECH PROJECT, 2017
** CPool_finalstumper_2017
** File description:
** rush3 function
*/

#include "../include/my.h"

int calc_width(char *buff)
{
	int width = 0;

	for (int i = 0; buff[i] != '\n'; i++)
		width++;
	return (width);
}

int calc_height(char *buff)
{
	int height = 0;

	for (int j = 0; buff[j] != '\0'; j++) {
		if (buff[j] == '\n')
			height++;
	}
	return (height);
}

void rush3(char *buff, int offset)
{
	int width = calc_width(buff);
	int height = calc_height(buff);
	char *type = malloc(sizeof(char) * 11);

	if (buff[0] == 'o')
		type = "[rush1-1] ";
	if (buff[0] == '/' || ((width == 1|| height == 1) && buff[0] == '*'))
		type = "[rush1-2] ";
	if (buff[0] == 'A' && buff[width-1] == 'A')
		type = "[rush1-3] ";
	if ((height == 1 || width == 1) && buff[0] == 'B')
		type[0] = '1';
	if (buff[offset-width-1] == 'A')
		type = "[rush1-4] ";
	if (buff[offset-width-1] == 'C')
		type = "[rush1-5] ";
	if (width == 0 || height == 0 || my_strlen(type) < 1) {
		error();
	} else {
		display(type, width, height);
	}
}
