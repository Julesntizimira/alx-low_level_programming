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
if ( i == 9 )
break;
putchar(44);
putchar(' ');
}
putchar('\n');
return (0);
}
