/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** Concatenates two strings.
*/

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;

	if (dest[0] == 0) {
		return (src);
	}
	while (dest[i] != '\0') {
		++i;
	}
	while (src[j] != '\0') {
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
