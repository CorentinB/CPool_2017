/*
** EPITECH PROJECT, 2017
** CPool_finalstumper_2017
** File description:
** Count width & height
*/

int width(char *buff)
{
	int width = 0;

	for (int i = 0; buff[i] != '\n'; i++)
		width++;
	return (width);
}

int height(char *buff)
{
	int height = 0;

	for (int j = 0; buff[j] != '\0'; j++) {
		if (buff[j] == '\n')
			height++;
	}
	return (height);
}