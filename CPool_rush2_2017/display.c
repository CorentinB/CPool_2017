/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017 - Display
** File description:
** Detect the language used in a string.
*/

int display(char const *sentence, char const *letter, int occurence)
{
	my_putstr(letter);
	my_putchar(':');
	my_put_nbr(occurence);
	my_putstr(" (");
	frequency(sentence, occurence);
	my_putstr("%)");
	my_putchar('\n');
	return (0);
}
