#include "my.h"
#include <stdlib.h>

int is_digit(char str_char)
{
	if (str_char > 47 && str_char < 58)
		return 1;
	else
		return 0;
}

rpn_t *to_rpn(char *str)
{
	rpn_t *rpn;
	char *nb;
	int i;
	int k = 0;
	int m = 0;
	int n = 0;

	nb = malloc(sizeof(char) * my_strlen(str));
	rpn = malloc(sizeof(rpn_t));
	rpn->ope = malloc(sizeof(char) * my_strlen(str));
	rpn->number = malloc(sizeof(char) * my_strlen(str));
	for (i = 0; i < my_strlen(str); i++) {
		if (is_digit(str[i]) == 0 && str[i] != '(' && str[i] != ')') {
			rpn->ope[k] = str[i];
			k++;
		} else if (is_digit(str[i]) == 1) {
			rpn->number[m] = str[i];
			m++;
			if (is_digit(str[i+1]) == 0) {
				rpn->number[m] = ' ';
				m++;
			}
		}
	}
	return (rpn);
}

int main(int argc, char const *argv[])
{
	char str[] = "(4*657)+(4087+6)+0+45*(45/8)";
	rpn_t *rpn;

	rpn = to_rpn(str);
	my_putstr("\n-----------------\n");
	my_putstr("List of numbers :");
	my_putstr("\n-----------------\n");
	for (int i = 0; i < my_strlen(rpn->number); i++) {
		my_putchar(rpn->number[i]);
	}
	my_putstr("\n-----------------\n");
	my_putstr("List of operators :");
	my_putstr("\n-----------------\n");
	for (int i = 0; i < my_strlen(rpn->ope); i++) {
		my_putchar(rpn->ope[i]);
	}
	my_putstr("\n-----------------\n");
}
