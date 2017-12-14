/*
** EPITECH PROJECT, 2017
** my_print_comb2
** File description:
** Displays, in ascending order, all the different combinations
** of two two-digit numbers.
*/

int display_comb2(int d1, int d2, int d3, int d4)
{
	my_putchar(d1 + 48);
	my_putchar(d2 + 48);
	my_putchar(' ');
	my_putchar(d3 + 48);
	my_putchar(d4 + 48);
	if (d1 == 9 && d2 == 8) {
	} else {
		my_putchar(',');
		my_putchar(' ');
	}
	return (0);
}

int calculate_comb2(int d1, int d2, int d3, int d4)
{
	while (d1 <= 9 && d2 <= 9 && d3 <= 9 && d4 <= 9) {
		display_comb2(d1, d2, d3, d4);
		if (d2 >= 9 && d3 >= 9 && d4 >= 9) {
			d1++;
			d2 = -1;
		}
		if (d3 >= 9 && d4 >= 9) {
			d2++;
			d3 = d1;
			d4 = d2;
		}
		if (d4 >= 9) {
			d3++;
			d4 = 0;
		} else {
			d4++;
		}
	}
	return (0);
}

int my_print_comb2(void)
{
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	int d4 = 1;

	calculate_comb2(d1, d2, d3, d4);
	return (0);
}
