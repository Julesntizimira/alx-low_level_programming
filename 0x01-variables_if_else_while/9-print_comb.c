#include <stdio.h>
/**
* main - Starting point
*
*Return: always 0 (success)
*/
int main(void)
{
/*Declaration*/
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; i++)
{
putchar(j + '0');
putchar(44);
}
putchar(i + '0');
}
putchar('\n');
return (0);
}
