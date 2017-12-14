/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** Capitalize the first letter of each word.
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
	int i = 1;
	int j = 123;

	str = my_strlowcase(str);
	if (str[0] > 96 && str[i] < 123)
		str[0] = str[0] - 32;
	while (str[i] != '\0') {
		if (str[i] > 96 && str[i] < j && str[i-1] > 31 && str[i-1] < 48)
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
