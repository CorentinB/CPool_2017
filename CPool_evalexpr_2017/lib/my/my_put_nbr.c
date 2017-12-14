/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** Displays the number given as a parameter. It must be able
** to display all the possible values of
** an int.
*/

void my_putchar(char c);

int exception(void)
{
	my_putchar('-');
	my_putchar('2');
	my_putchar('1');
	my_putchar('4');
	my_putchar('7');
	my_putchar('4');
	my_putchar('8');
	my_putchar('3');
	my_putchar('6');
	my_putchar('4');
	my_putchar('8');
}

int my_put_nbr(int nb)
{
	int n2 = 0;

	if (nb == -2147483648) {
		exception();
	}
	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10) {
		n2 = nb % 10;
		nb = nb / 10;
		my_put_nbr(nb);
		my_putchar(n2 + 48);
	} else {
		my_putchar(nb + 48);
	}
	return (0);
}
