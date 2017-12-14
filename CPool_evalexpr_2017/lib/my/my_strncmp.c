/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** Compare the first n bytes of two strings.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	for(int i = 0; i <= n; i++) {
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if(s1[i] == '\0' || s2[i] == '\0')
			return (0);
	}
	return (0);
}
