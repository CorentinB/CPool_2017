/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** Return 1 if the string passed only contain lowercase
**  alpha char, if not, then it return 0.
*/

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 96 && str[i] < 123) {
			++i;
		} else {
			return (0);
		}
	}
	return (1);
}
