# include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, z, k, p, y = 0;
    char *v = n1;
    char *w = n2;

    while (*v != '\0')
    {
        v++;
    }
    z = v - n1;

    while (*w != '\0')
    {
        w++;
    }
    k = w - n2;

    if ((z >= size_r) || (k >= size_r))
        return (0);

    k--;
    z--;
    for (i = size_r - 1; i >= 0; i--, k--, z--)
    {
        if ((z >= 0) && (k >= 0))
        {
            p = (n1[z] - '0') + (n2[k] - '0') + y; 
            r[i] = (p % 10) + '0'; 
            y = p / 10;
        }
        else if ((z < 0) && (k >= 0))
        {
            p = (n2[k] - '0') + y;
            r[i] = (p % 10) + '0';
            y = p / 10;
        }
        else if ((z >= 0) && (k < 0))
        {
            p = (n1[z] - '0') + y;
            r[i] = (p % 10) + '0';
            y = p / 10;
        }
        else
        {
            break;
        }
    }

    if (y > 0) 
        return (0);

    return (r);
}

