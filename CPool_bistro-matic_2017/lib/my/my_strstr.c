/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** Find the first occurence of the substring in the string,
** both gived as parameters.
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	int temporary = 0;
	int length = 0;
	int k = 0;

	length = my_strlen(to_find);
	while (str[i] != '\0') {
		temporary = i;
		while (str[i] == to_find[j] && to_find[j] != '\0') {
			++j;
			++i;
		}
		k = i - j;
		if (length == j)
			return ((char *)str+k);
		i = temporary + 1;
		j = 0;
	}
	return (NULL);
}
