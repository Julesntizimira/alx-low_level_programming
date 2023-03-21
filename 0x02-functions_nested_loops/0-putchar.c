#include <stdio.h>
/**
 * main - a functional starting point
 *
 * Return: always 0 (success)
 *
 */

/*functional declaration*/
void print_putchar(void);

int main(void)
{
	print_putchar();
	return (0);
}

/**
 * print_putchar - printing _putchar
 */

void print_putchar(void)
{
	putchar(95);
	putchar(112);
	putchar(117);
	putchar(116);
	putchar(99);
	putchar(104);
	putchar(97);
	putchar(114);
	putchar('\n');

}
