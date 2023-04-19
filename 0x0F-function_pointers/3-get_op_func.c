# include "3-calc.h"
# include <stddef.h>
/**
 * get_op_func - funct
 * @s: input
 * Return: int
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
