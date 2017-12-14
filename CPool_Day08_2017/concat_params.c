/*
** EPITECH PROJECT, 2017
** concat_params
** File description:
** Concatenate parameters given.
*/

char *concat_params(int argc, char **argv)
{
	char *dest;
	int length = 0;
	char break_it[] = "\n";
	int i;
	char *temp;

	for (i = 0; i < argc; ++i)
		length = length + my_strlen(argv[i]) + 1;
	dest = malloc(sizeof(char) * length);
	for (i = 0; i < argc; ++i) {
		temp = malloc(my_strlen(argv[i]) + 2);
		my_strcpy(temp, argv[i]);
		dest = my_strcat(dest, my_strcat(temp, break_it));
	}
	dest = my_strcat(dest, "\0");
	return (dest);
}
