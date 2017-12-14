/*
** EPITECH PROJECT, 2017
** my_print_digits
** File description:
** Display digits on ascending order
*/

int my_print_digits(void)
{
	int i = 48;

	while (i <= 57) {
		my_putchar(i);
		i = i + 1;
	}
	return (0);
}
