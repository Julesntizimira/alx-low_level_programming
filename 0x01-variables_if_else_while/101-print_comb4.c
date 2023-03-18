#include <stdio.h>
/**
* main - Starting point
*
*Return: always 0 (success)
*/
int main(void)
{
/*Declaration*/
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
if (i > j)
continue;
if (j > k)
continue;
if ((i == j) ||  (j == k) || (i == k))
continue;
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if ((i == 7) && (j == 8) && (k == 9))
break;
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
