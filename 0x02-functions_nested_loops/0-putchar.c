#include <stdio.h>
/**
 * main - funcctional starting point
 *
 * return: Always 0 (success)
 */
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
