#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - checks for lowercase
 * @n: int parameter
 */
void print_to_98(int n)
{
        int i;

        for (i = n; i <= 98; i++)
        {
                printf("%d, ", i);
        }
        printf("\n");
}
