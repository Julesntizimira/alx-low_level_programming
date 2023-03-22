#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - checks for lowercase
 */

void print_to_98(int n)
{
	int i, j, z, y;

	if (n >= 0)
	{
		int z, y;

		z = n % 10;
		y = n / 10;
		for (i = y; i <= 9; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if ((i = y) && (j < z))
				{
					continue;
				}
				if ((i = 9) && (j = 9))
				{
					break;
				}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(',');
					_putchar(' ');
				
			}
		}
	}
	if (n < 0)
	{


                n = n * -1;
		z = n % 10;
                y = n / 10;
                for (i = y; i > 0; i--)
                {
                        for (j < 10; j > 0; j--)
                        {
                                if ((i = y) && (j > z))
                                {
					continue;
				}
				if ((i = 9) && (j = 9))
                                {
                                        break;
                                }
			        _putchar('-'); 
				_putchar(i + '0');
			       	_putchar(j + '0');
			       	_putchar(',');
			       	_putchar(' ');
                                
                        }
                }
		for ( i = 0; i < 10; i++)
		{
			for ( j = 0; j < 10; j++)
			{
				if ((i = 9) && (j = 9))
                                {
                                        break;
                                }
				_putchar(i + '0');
				_putchar(j + '0');
			       	_putchar(',');
			       	_putchar(' ');
			}
		}
	}
	


}
