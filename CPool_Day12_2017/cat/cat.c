/*
** EPITECH PROJECT, 2017
** CPool_Day12_2017
** File description:
** Cat command.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "../include/my.h"

int no_args(void)
{
	char *out;
	char buffer[32];
	int j = 0;

	while (j == 0) {
		out = read(0, buffer, 32);
		for (int i = 0; i < out; i += 1)
			my_putchar(buffer[i]);
	}
	return (0);
}

int read_file(int reading)
{
	char buffer[32];
	int size = 32;

	while (size == 32) {
		size = read(reading, buffer, 32);
		for (int i = 0; i < size; i += 1)
			my_putchar(buffer[i]);
	}
	return (0);
}

int open_file(char **argv)
{
	int reading;

	reading = open(argv, O_RDONLY);
	if (reading == -1) {
		write(2, error_message(argv), 1);
		return(84);
	}
	read_file(reading);
	close(reading);
	return (0);
}

int perform_cat(int argc, char **argv)
{
	for (int i = 1; i < argc; i += 1)
		open_file(argv[i]);
	return (0);
}

void error_message(char **argv)
{
	my_putstr("cat: ");
	my_putstr(argv);
	my_putstr(": No such file or directory\n");
}