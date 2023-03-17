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
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
