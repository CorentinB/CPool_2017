/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** Reverse a string.
*/

char *my_revstr(char *str)
{
	int i = 0;
	int ii = 0;
	char *reversed = str;
	char temp;
	int e = 0;

	while (str[i] != '\0') {
		++i;
	}
	--i;
	e = i/2;
	while (i > e) {
		temp = str[ii];
		reversed[ii] = str[i];
		reversed[i] = temp;
		--i;
		++ii;
	}
	str = reversed;
	return (str);
}
