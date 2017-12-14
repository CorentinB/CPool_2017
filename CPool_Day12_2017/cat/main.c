/*
** EPITECH PROJECT, 2017
** CPool_Day12_2017
** File description:
** main function for cat
*/

int main(int argc, char **argv)
{
	if (argc <= 1)
		no_args();
	else
		perform_cat(argc, argv);
	return (0);
}