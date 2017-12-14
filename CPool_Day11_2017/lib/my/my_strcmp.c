/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** Compare two strings.
*/

int my_strcmp(char const *s1, char const *s2)
{
	int length = my_strlen(s1);
	int i = 0;

	if (my_strlen(s1) == 0 && my_strlen(s2) == 0) {
		return (0);
	}
	while (i <= length) {
		if (s1[i] == s2[i]) {
			++i;
		}
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
			if (s1[i] < s2[i]) {
				return (-1);
			} else if (s1[i] > s2[i]) {
				return (1);
			}
			return (0);
		}
	}
}
