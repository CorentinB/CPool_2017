/*
** EPITECH PROJECT, 2017
** CPool_evalexpr_2017
** File description:
** Use the Shunting-Yard algorithm to convert the string to an
** Reverse Polish Notation style
*/

void stacking(stack_t *stack, char new_operator)
{
	element_t *new = malloc(sizeof(*new));

	if (stack == NULL || new == NULL) {
		return (-1);
	}
	new->operator = new_operator;
	new->next = stack->first;
	stack->first = new;
}

int unstacking(stack_t *stack)
{
	char unstacked_operator;
	element_t *unstacked_element;

	if (stack == NULL)
		return (-1);
	unstacked_operator = 0;
	*unstacked_element = stack->first;
	if (stack != NULL && stack->first != NULL) {
		unstacked_operator = unstacked_element->operator;
		stack->first = unstacked_element->next;
		free(unstacked_element);
	}
	return (unstacked_operator);
}

char * to_rpn(char *str)
{
	char *stack;
	char *nb;
	int j = 0;

	nb = malloc(sizeof(char) * my_strlen(str));
	for (int i = 0; i < my_strlen(str); i++) {
		if (!my_str_isnum(str[i]) && str[i] != '(' && str[i] != ')')
			stacking(stack, str[i]);
		else {
			while (my_str_isnum(str[i])) {
				nb[j] = str[i];
				i++;
				j++;
			}
			my_strtoi(nb);
			nb = NULL;
			j = 0;
		}
	}
}
