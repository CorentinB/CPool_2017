/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** Return 1 if string passed as param only contain printable char,
** return 0 if not.
*/

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 31 && str[i] < 256) {
			++i;
		} else {
			return (0);
		}
	}
	return (1);
}
