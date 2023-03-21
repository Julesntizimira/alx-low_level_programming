#include <stdio.h>
/**
 * times_table - checks for lowercase
 */
void times_table(void)
{
	int i, j, k, z, n, m, v, w, y, b;

	for ( i = 0; i < 10; i++)
	{ 
		putchar(48);
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	for (j = 48; j <= 57; j++)
	{
		putchar(i);
                putchar(44);
                putchar(' ');
	}
	putchar('\n');
	for (k = 0; k < 18; k++)
        {
		if ( (k % 2) != 0)
			continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	for (z = 0; z <= 27; z++)
        {
                if ( (z % 3) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
	putchar('\n');
	for (m = 0; m <= 36; m++)
        {
                if ( (z % 4) != 0)
                        continue;
                putchar(m + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	for (n = 0; n <= 45; n++)
        {
                if ( (z % 5) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	for (v = 0; v <= 54; v++)
        {
                if ( (v % 6) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	for (w = 0; w <= 63; w++)
        {
                if ( (z % 7) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	 for (y = 0; y <= 72; y++)
        {
                if ( (z % 8) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');
	 for (b = 0; b <= 81; b++)
        {
                if ( (z % 9) != 0)
                        continue;
                putchar(i + '0');
                putchar(44);
                putchar(' ');
        }
        putchar('\n');

}

