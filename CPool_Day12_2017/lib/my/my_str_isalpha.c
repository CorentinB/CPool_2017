/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Test if the string passed as param only contains alphabetical char or not.
*/

int my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 123) {
			if (str[i] < 91 || str[i] > 96) {
				i++;
			} else {
				return (0);
			}
		} else {
			return (0);
		}
	}
	return (1);
}
