/*
** EPITECH PROJECT, 2017
** rush1-1
** File description:
** Display a square on the screen.
*/

int display(int middle, int position)
{
	if (position == 0) {
		my_putchar('o');
		for (int i = 0; i < middle; ++i)
			my_putchar('-');
		if (middle >= 0)
			my_putchar('o');
		my_putchar('\n');
	} else if (position == 1) {
		my_putchar('|');
		for (int i = 0; i < middle; ++i)
			my_putchar(' ');
		if (middle >= 0)
			my_putchar('|');
			my_putchar('\n');
	}
	return (0);
}

void rush(int x, int y)
{
	int middle = x - 2;
	int lines = y - 2;
	int sup = 2147483647;

	if (x <= 0 || y <= 0 || x > sup || y > sup) {
		write(2, "Invalid size\n", 13);
	} else {
		display(middle, 0);
		for (int i = 0; i < lines; ++i)
			display(middle, 1);
		if (y != 1)
			display(middle, 0);
	}
}
