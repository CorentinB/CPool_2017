/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** Compute square root.
*/

int my_compute_square_root(int nb)
{
	for (int i = 0; i <= nb; i += 1) {
		if (i * i == nb)
			return (i);
	}
	return (0);
}