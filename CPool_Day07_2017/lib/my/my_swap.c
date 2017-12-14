/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** Function that swaps the content of two integers.
*/

void my_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
