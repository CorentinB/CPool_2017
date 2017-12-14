/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
** Display lowercase alphabet in descending order
*/

int my_print_revalpha(void)
{
	int i = 122;

	while (i >= 97) {
		my_putchar(i);
		i = i - 1;
	}
	return (0);
}
