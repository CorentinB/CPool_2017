/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** Allocate memory and copy copy the string given as arg in it.
*/

char *my_strdup(char const *src)
{
	int i = 0;
	char *dest = malloc(my_strlen(src));

	while (src[i] != '\0') {
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
