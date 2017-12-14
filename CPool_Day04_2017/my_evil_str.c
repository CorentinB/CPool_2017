/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** Swap each of the string’s characters, two by two.
*/

char *my_evil_str(char *str)
{
	int i = 0;
	int ii = 0;
	char *z = str;
	char temp;
	int e = 0;

	while (str[i] != '\0') {
		i++;
	}
	i--;
	e = i / 2;
	while (i > e) {
		temp = str[ii];
		z[ii] = str[i];
		z[i] = temp;
		i--;
		ii++;
	}
	my_putstr(z);
}
