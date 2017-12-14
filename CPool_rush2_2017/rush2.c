/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017
** File description:
** Detect the language used in a string.
*/

int count_letter(char const *sentence, char const *letter)
{
	char letter1 = letter[0];
	char letter2;
	int occurence = 0;

	if (letter1 > 64 && letter1 < 91)
		letter2 = letter1 + 32;
	else
		letter2 = letter1 - 32;
	for (int i = 0; sentence[i] != '\0'; i += 1) {
		if (sentence[i] == letter1 || sentence[i] == letter2)
			occurence = occurence + 1;
	}
	display(sentence, letter, occurence);
	return (0);
}

int multiple_letters(int argc, char const **argv)
{
	for (int i = 2; i < argc; i++)
		count_letter(argv[1], argv[i]);
	return (0);
}

int main(int argc, char const **argv)
{
	multiple_letters(argc, argv);
	return (0);
}
