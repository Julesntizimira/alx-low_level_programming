#include <stdio.h>
#include "main.h"

/*
 * print_times_table - a void function
 * @n: int type
 */

/*a function that prints table*/
void print_times_table(int n)
{
	int i, j, z;
	
	if ((n >= 0) && (n <= 15))
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				z = n;
			else if (j != 0)
				z = n * j;
			
			for(i = 0; i <= z; i++)
			{
				if(j == 0)
				{
					printf("%d", j);
					if (i != z)
					{
						putchar(',');
						printf("   ");
					}
				}
				else if(((i % j) == 0) && (j != 0))
				{
					if (i != 0)
					{
						if (i < 10)
							printf("   ");
						else if ((i >= 10) && (i < 100))
							printf("  ");
						else
							printf(" ");
					}
					printf("%d", i);
					if (i != z)
					{
						putchar(',');
					}
				}
			}
			putchar('\n');
		}
	 }
}                                                                                                                                                    
