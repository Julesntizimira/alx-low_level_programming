# include <stdio.h>
# include <stdarg.h>

struct format
{
	char id;
	char *type;
}
type[4];
void print_all(const char * const format, ...)
{
	int i, j;

	switch (expression)
	{
		case constant1:
			break;
		case constant2;
		break;
    .
    .
    .
    default:
      // default statements
}
	type[0] = {'c', "char"};
	type[1] = {'i', "int"};
	type[2] = {'f', "float"};
	type[3] = {'s', "char *"};

	va_list args;
	va_start(args);

	i = 0;
	while(format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == type[j].id)
			{
				va_arg(ars, type[j].type)
			}
		}
	

	}
	va_start(args, i);



}
