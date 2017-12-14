/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** Compare the first n bytes of two strings.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	if (my_strlen(s1) == 0 && my_strlen(s2) == 0) {
		return (0);
	}
	while (i <= n) {
		if (s1[i] == s2[i]) {
			++i;
			if (i == n)
				return (0);
		}
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
			if (s1[i] < s2[i]) {
				return (-1);
			} else if (s1[i] > s2[i]) {
				return (1);
			}
		}
	}
}
