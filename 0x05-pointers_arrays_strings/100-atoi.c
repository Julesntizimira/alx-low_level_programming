# include "main.h"
# include <stdio.h>
/**
 * _atoi - print in reverse
 *
 * @s: str
 *
 * Return: dest
 */
int _atoi(char *s)
{
    int sign = 1;
    long result = 0;

    // define min and max values for an int
    int int_max = ~(1 << (sizeof(int) * 8 - 1));
    int int_min = 1 << (sizeof(int) * 8 - 1);

    // skip whitespace
    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    // handle sign
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    // process digits
    while (*s >= '0' && *s <= '9') {
        if (result > int_max / 10 || (result == int_max / 10 && (*s - '0') > int_max % 10)) {
            // handle overflow
            if (sign == 1) {
                return int_max;
            } else {
                return int_min;
            }
        }
        result = result * 10 + (*s - '0');
        s++;
    }

    return (int)(sign * result);
}

}
