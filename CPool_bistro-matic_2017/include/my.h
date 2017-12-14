/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Contain all the prototypes of function in libmy
*/

#ifndef MY_H
#define MY_H
#define EXIT_USAGE 84
#define EXIT_BASE 84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC 84
#define EXIT_READ 84
#define EXIT_OPS 84
#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"

typedef struct parse_nb
{
	char *res;
	char *expr;
} parse_nb_t;
typedef struct variables
{
	int count;
	int count2;
	char *result;
	int tmp;
	int j;
	int carry;
	int zero_var;
} var_t;
typedef struct variables_sum
{
	int count;
	int count2;
	char *result;
	int tmp;
	int j;
	int carry;
	int zero_var;
} varsum_t;
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_atoi(char *str);
char *get_expr(unsigned int size);
char *inf_add(char const *op1, char const *op2);
int is_digit(char str_char);
char *inf_mul(char *op1, char *op2);
char *add_diff_size(var_t *v, char const *op1, char const *op2);
char *cut_zero(var_t *v);
char *infin_carry(var_t *v, char const *op1, char const *op2);
char  *infin_add(char const *op1, char const *op2, var_t *v);
void init_variables(var_t *v, char const *op1, char const *op2);
char *infin_carry_neg(var_t *v, char const *op1, char const *op2);
char *add_neg_size(var_t *v, char const *op1, char const *op2);
char  *infin_neg(char const *op1, char const *op2, var_t *v);
char *neg_diff_size(var_t *v, char const *op1, char const *op2);
char *neg_diff_size2(var_t *v, char const *op1, char const *op2);
char *infin_neg3(char const *op1, char const *op2, var_t *v);
char *infin_neg2(char const *op1, char const *op2, var_t *v);
int do_calc(char *str);
int is_parenthesis(char *str);
char *put_parenthesis(char *str);
int get_opening_par(char *str);
int get_closing_par(char *str, int opar_i);
void my_itoa(int n, char s[]);
char *replace_string(char *str, char *to_replace, int i, int j);
char *__eval_expr(char *str, int op_par, int cls_par);
char *eval_expr(char *str);
parse_nb_t parse_number(char *str);
parse_nb_t parse_factors(char *str);
int parse_summands(char *str);
int do_calc(char *str);
char *inf_div(char *op1, char *op2, int type);
int compare_numbers(char *op1, char *op2);
int compare_numbers_neg(char *op1, char *op2);
void check_base(char *base, char *ops);
void check_base_2(char base, char *ops);
void check_base_3(char *base, char digit);
void check_parenthesis(char *expr);
void check_ops(char *ops);
void check_ops_2(char *ops, char operator);

#endif
