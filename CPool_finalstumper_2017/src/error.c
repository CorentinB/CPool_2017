/*
** EPITECH PROJECT, 2017
** CPool_finalstumper_2017
** File description:
** Deal with erros
*/

int error()
{
	char error[] = "none\n";

	write(2, my_putstr(error), 1);
	return (84);
}
