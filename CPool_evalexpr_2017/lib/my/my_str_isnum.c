/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** Return 1 if the string is only made of digits, or 0 if not.
*/

int my_str_isnum(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 47 && str[i] < 58) {
			++i;
		} else {
			return (0);
		}
	}
	return (1);
}
