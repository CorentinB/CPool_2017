/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Convert char into int
*/

int my_atoi(char *str)
{
	unsigned int i = 0;
	int number = 0;
	int negative;

	if (!(str))
		return (0);
	negative = 0;
	if (str[0] == '-') {
		i = 1;
		negative = 1;
	}
	while (str[i] >= 48 && str[i] <= 57) {
		number *= 10;
		number += ((int)str[i] - 48);
		i += 1;
	}
	if (negative == 1)
		number = -number;
	return (number);
}
