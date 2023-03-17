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
for (i = 97; i <= 122; i++)
{
if (i == 101)
continue;
else if (i == 113)
continue;
putchar(i);
}
putchar('\n');
return (0);
}
