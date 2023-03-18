#include <stdio.h>
/**
* main - Starting point
*
*Return: always 0 (success)
*/
int main(void)
{
/*Declaration*/
int i, j, z, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (z = 0; z <= 9; z++)
{
if ((k == z) && (i == j) && (i == 0))
continue;
if ((i == k) && (k == z))
continue;
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(z + '0');
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
