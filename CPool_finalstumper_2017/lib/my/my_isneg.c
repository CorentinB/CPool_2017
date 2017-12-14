/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** Function that displays either N if the integer passed as
** parameter is negative, P, if positive or null
*/

void my_putchar(char c);

int my_isneg(int n)
{
	if (n >= 0) {
		my_putchar('P');
	} else {
		my_putchar('N');
	}
	return (0);
}
