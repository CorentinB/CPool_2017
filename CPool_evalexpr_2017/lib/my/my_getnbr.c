/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** Get nbr.
*/

int check_int_overflow(long long int nb)
{
	if(nb < -2147483648 || nb > 2147483647)
		return (0);
	else
		return (nb);
}

int my_getnbr (char *str)
{
	int i = 0;
	long long int nb = 0;
	int isneg = 1;

	while ((*str == '-' || *str == '+') && *str != '\0') {
		if (*str == '-')
			isneg *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str != '\0') {
		nb = nb + *str - 48;
		nb = nb * 10;
		str++;
	}
	nb /= 10;
	nb /= isneg;
	return (check_int_overflow(nb));
}

