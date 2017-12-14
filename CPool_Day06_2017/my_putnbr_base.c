/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Convert and display a decimal number
** into a number in a given base.
*/

int my_put_nbr(int nb)
{
	int n2 = 0;

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

int my_putnbr_base(int nbr, char const *base)
{
	int base_type = my_strlen(base);
	int n2 = 0;

	if (nbr >= 10) {
		n2 = nbr % base_type;
		nbr = nbr / base_type;
		my_putnbr_base(nbr, base);
		my_putchar(base[n2]);
	}
	if (nbr < 10) {
		my_putchar(base[nbr%base_type]);
	}
}
