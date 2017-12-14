/*
** EPITECH PROJECT, 2017
** CPool_bistro-matic_2017
** File description:
** Function to compare two numbers given as argument (test if 1 > 2)
*/

#define LENGTH_1 my_strlen(op1)
#define LENGTH_2 my_strlen(op2)

int compare_numbers_neg(char *op1, char *op2)
{
	if (LENGTH_1 > LENGTH_2)
		return (0);
	if (LENGTH_2 > LENGTH_1)
		return (1);
	for (int i = 1; i < LENGTH_1; i++) {
		if (op1[i] > op2[i])
			return (0);
		if (op1[i] < op2[i])
			return (1);
	}
	return (2);
}

int
compare_numbers(char *op1, char *op2)
{
	if (op1[0] == '-' && op2[0] != '-')
		return (0);
	if (op1[0] != '-' && op2[0] == '-')
		return (1);
	if (op1[0] == '-' && op2[0] == '-')
		return(compare_numbers_neg(op1, op2));
	if (LENGTH_1 > LENGTH_2)
		return (1);
	if (LENGTH_2 > LENGTH_1)
		return (0);
	for (int i = 0; i < LENGTH_1; i++) {
		if (op1[i] > op2[i])
			return (1);
		if (op1[i] < op2[i])
			return (0);
	}
	return (2);
}
