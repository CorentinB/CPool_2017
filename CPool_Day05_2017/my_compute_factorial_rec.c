/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec
** File description:
** Recursive function returning the factorial
** of the number given as a parameter.
*/

int my_compute_factorial_rec(int nb)
{
	if (nb == 0)
		return(1);
	if (nb > 1 && nb <= 12)
		return(nb * my_compute_factorial_rec(nb - 1));
	if (nb < 0 || nb > 12)
		return(0);
}
