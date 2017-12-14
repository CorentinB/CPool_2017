/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Function for changing the base of the result
*/

#define ASCII(x)(x + '0')

char *base_change(char *str, char *base)
{
	for (int i = 0; i < my_strlen(str); i++)
		str[i] = base[str[i] - 48];
	return (str);
}
