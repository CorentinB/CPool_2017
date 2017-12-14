/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** Concatenates n characters of the src string to the end of the dest string.
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int j = 0;

	if (dest[0] == 0) {
		return (src);
	}
	while (dest[i] != '\0') {
		++i;
	}
	while (j < nb) {
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
