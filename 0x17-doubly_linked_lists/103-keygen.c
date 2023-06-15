#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest - finds the largest number
 *
 * @username: username
 * @length: length of username
 * Return: the largest number
 */
int find_largest(char *username, int length)
{
	int current_char;
	int largest_char;
	unsigned int rand_num;

	current_char = *username;
	largest_char = 0;

	while (largest_char < length)
	{
		if (current_char < username[largest_char])
			current_char = username[largest_char];
		largest_char += 1;
	}

	srand(current_char ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - multiplies each character of username
 *
 * @username: username
 * @length: length of username
 * Return: multiplied character
 */
int multiply_chars(char *username, int length)
{
	int current_char;
	int multiplied_chars;

	current_char = multiplied_chars = 0;

	while (multiplied_chars < length)
	{
		current_char = current_char + username[multiplied_chars] * username[multiplied_chars];
		multiplied_chars += 1;
	}

	return (((unsigned int)current_char ^ 239) & 63);
}

/**
 * generate_random_char - generates a random character
 *
 * @username: username
 * Return: a random character
 */
int generate_random_char(char *username)
{
	int current_char;
	int num_iterations;

	current_char = num_iterations = 0;

	while (num_iterations < *username)
	{
		current_char = rand();
		num_iterations += 1;
	}

	return (((unsigned int)current_char ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, current_char, largest_char;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- Function 1 ----------- */
	keygen[0] = ((char *)alph)[(length ^ 59) & 63];
	/* ----------- Function 2 ----------- */
	current_char = largest_char = 0;
	while (largest_char < length)
	{
		current_char = current_char + argv[1][largest_char];
		largest_char = largest_char + 1;
	}
	keygen[1] = ((char *)alph)[(current_char ^ 79) & 63];
	/* ----------- Function 3 ----------- */
	current_char = 1;
	largest_char = 0;
	while (largest_char < length)
	{
		current_char = argv[1][largest_char] * current_char;
		largest_char = largest_char + 1;
	}
	keygen[2] = ((char *)alph)[(current_char ^ 85) & 63];
	/* ----------- Function 4 ----------- */
	keygen[3] = ((char *)alph)[find_largest(argv[1], length)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[multiply_chars(argv[1], length)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
	keygen[6] = '\0';
	for (current_char = 0; keygen[current_char]; current_char++)
		printf("%c", keygen[current_char]);
	return (0);
}
