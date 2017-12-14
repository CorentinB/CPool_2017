/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** Compute power
*/

int my_compute_power_rec(int nb, int power)
{
	if (power > 0)
		return(nb * my_compute_power_rec(nb, power - 1));
	return (1);
}
