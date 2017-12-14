/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** put char
*/

#include <unistd.h>
ssize_t write(int fd, const void *buf, size_t count);

void my_putchar(char c)
{
	write(1, &c, 1);
}
