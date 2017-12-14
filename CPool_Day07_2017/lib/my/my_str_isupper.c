/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** Return 1 if the string passed contain only uppercase alpha char.
**  Return 0 if not.
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 91) {
			++i;
		} else {
			return (0);
		}
	}
	return (1);
}
