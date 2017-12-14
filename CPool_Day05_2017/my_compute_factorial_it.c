/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** Returns the factorial of the number given as a parameter.
*/

int my_compute_factorial_it(int nb)
{
	int result = 1;

	while (nb >= 1 && nb <= 12) {
		if (nb > 0) {
			result = result * nb;
			nb--;
		}
	}
	if (nb < 0 || nb > 12) {
		result = 0;
	}
	return (result);
}
