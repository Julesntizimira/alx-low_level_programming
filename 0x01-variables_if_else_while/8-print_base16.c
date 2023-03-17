#include <stdio.h>
/**
* main - Starting point
*
*Return: always 0 (success)
*/
int main(void)
{
/*Declaration*/
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (i = 10; i <= 15; i++)
{
putchar(i + 'a' - 10);
}
putchar('\n');
return (0);
}
