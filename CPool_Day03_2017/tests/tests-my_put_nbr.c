/*
** EPITECH PROJECT, 2017
** tests-my_put_nbr
** File description:
** Testing file for my_put_nbr
*/

int main()
{
	int up = 2147483647;
	int down = -2147483648;
	int out = 2147483650;
	char letter = 'a';

	my_put_nbr(up);
	my_put_nbr(down);
	my_put_nbr(out);
	my_put_nbr(letter);
	return (0);
}
