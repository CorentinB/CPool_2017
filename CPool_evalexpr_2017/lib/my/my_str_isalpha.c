/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** Test if the string passed as param only contains alphabetical char or not.
*/

int my_str_isalpha(char const *str)
{
	int i;
	char c;
	int alpha_count = 0;

	if (str[0] == '\0')
		return (1);
	for (i = 0; str[i] != '\0'; i++){
		c = str[i];
		if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
			alpha_count++;
		else
			return (0);
	}
	return (1);
}
