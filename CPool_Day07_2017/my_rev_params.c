/*
** EPITECH PROJECT, 2017
** my_rev_params
** File description:
** Print params of main in reverse order.
*/

int main(int argc, char **argv)
{
	for (int i = argc; i > 0; i--) {
		my_putstr(argv[i-1]);
		my_putchar('\n');
	}
	return (0);
}
