/*
** EPITECH PROJECT, 2017
** my get nbr str
** File description:
** like get nbr but reutrn as str
*/

char *my_get_nbr_str(char const *str, char **end_ptr)
{
	char *res = malloc(sizeof(char) * my_strlen(str));
	int j = 0;
	int stop_for = 0;
	int count = 0;

	for(; stop_for == 0; str++) {
		if ((*str > '9' || *str < '0') && (j != 0))
			stop_for++;
		if (*str == '-' && *str + 1 <= '9' &&  *str + 1 >= '0') {
			res[count] = '-';
			count++;
		}
		if (*str <= '9' && *str >= '0') {
			res[count] = *str;
			j = j + 1;
			count++;
		}
	}
	*end_ptr = str;
	return(res);
}
