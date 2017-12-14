/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017 - Frequency
** File description:
** Detect the language used in a string.
*/

int frequency(char const *sentence, int occurence)
{
	int alpha = 0;
	int frequency = 0;
	int decimal = 0;
	int unit = 0;

	for (int i = 0; sentence[i] != '\0'; i += 1) {
		if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			alpha += 1;
		if (sentence[i] >= 'a' && sentence[i] <= 'z')
			alpha += 1;
	}
	occurence *= 10000;
	alpha *= 100;
	frequency = (occurence * 100) / alpha;
	decimal = frequency % 100;
	unit = frequency / 100;
	my_put_nbr(unit);
	my_putchar('.');
	my_put_nbr(decimal);
	return (0);
}
