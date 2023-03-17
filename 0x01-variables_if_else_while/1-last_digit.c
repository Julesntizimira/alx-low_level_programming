#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Starting point
*
*Return: always 0 (success)
*/
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
/* conditional if statement */
if (l > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, l);
}
else    if (l == 0)
{
printf("Last digit of %i is %i and is 0\n", n, l);
}
else    if ((l <= 6) || (n != 0))
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
}
return (0);
}
