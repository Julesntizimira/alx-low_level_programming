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
putchar(i + '0');
putchar(j + '0');
if (i > j)
continue;
else if ((i == 8) && (j == 9))
break;
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
