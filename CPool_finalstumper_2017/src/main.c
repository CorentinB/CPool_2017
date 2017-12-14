/*
** EPITECH PROJECT, 2017
** CPool_finalstumper_2017
** File description:
** main function
*/

#include "../include/my.h"
#include <unistd.h>
#define BUFF_SIZE (4096)
#include <stdlib.h>

int main()
{
	char buff[BUFF_SIZE + 1];
	int offset;
	int len = BUFF_SIZE;

	offset = 0;
	while (len == BUFF_SIZE) {
		while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
			offset = offset + len;
	}
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	rush3(buff, offset);
	return (0);
}
