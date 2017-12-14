/*
** EPITECH PROJECT, 2017
** parenthesis_parsing.c
** File description:
** File wich contains parenthesis_parsing functions
*/

char *put_parenthesis(char *str)
{
	int i = 0;
	char *dest;

	dest = malloc(sizeof(char) * my_strlen(str) + 2);
	while (str[i] != 0) {
		dest[i + 1] = str[i];
		i++;
	}
	dest[0] = '(';
	dest[my_strlen(str) + 1] = ')';
	return (dest);
}

int get_opening_par(char *str)
{
	int i;
	int index = 0;

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(')
			index = i;
		if (index != 0 && str[i + 1] != '(')
			return (index);
	}
	return (index);
}

int get_closing_par(char *str, int opar_i)
{
	int i;

	for (i = opar_i; str[i] != ')'; i++);
	return (i);
}

int is_parenthesis(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(')
			return (1);
	}
	return (0);
}
