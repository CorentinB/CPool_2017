/*
** EPITECH PROJECT, 2017
** my_print_comb
** File description:
** Display in ascending order, all the numbers composed by three different
** digits number. Given three digits (all different), only the smallest
** number composed by those digits must be displayed.
*/

int print(int d1, int d2, int d3)
{
	while (d2 <= 9) {
		d3 = d2 + 1;
		while (d3 <= 9) {
			my_putchar(d1 + 48);
			my_putchar(d2 + 48);
			my_putchar(d3 + 48);
			if (d1 == 7 && d2 == 8 && d3 == 9) {
			} else {
				my_putchar(',');
				my_putchar(' ');
			}
			d3 = d3 + 1;
		}
		d2 = d2 + 1;
	}
	return (0);
}

int my_print_comb(void)
{
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;

	while (d1 <= 9) {
		d2 = d1 + 1;
		print(d1, d2, d3);
		d1 = d1 + 1;
	}
	return (0);
}
