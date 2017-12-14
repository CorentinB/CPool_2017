/*
** EPITECH PROJECT, 2017
** my_print_alpha
** File description:
** Display lowercase alphabet in ascending order
*/

int my_print_alpha(void)
{
	int i = 97;

	while (i <= 122) {
		my_putchar(i);
		i = i + 1;
	}
	return (0);
}
