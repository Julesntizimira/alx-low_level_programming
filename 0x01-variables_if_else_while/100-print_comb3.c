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
for (j = 0; j <= 9; j++)
{
if (i > j)
continue;
if (i == j)
continue;
putchar(i + '0');
putchar(j + '0');
if ((i == 8) && (j == 9))
break;
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
