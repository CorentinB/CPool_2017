/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Check if a char is a digit
*/

int is_digit(char str_char)
{
	if (str_char >= '0' && str_char <= '9')
		return 1;
	else
		return 0;
}
