#include <stdio.h>
#include <stdarg.h>

typedef struct
{
	char fmt;
	void (*print)(va_list);
} arg_type;

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}
void print_string(va_list args)
{
	char *s = va_arg(args, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

void print_all(const char* const format, ...)
{
    va_list args;
    int k, z;
  
     arg_type types[] = {
        { 'c', print_char},
        { 'i', print_int},
        { 'f', print_float},
        { 's', print_string}
    };
     

      va_start(args, format);
      
      z = 0;
      while (format[z] != '\0')
      {
	      k = 0;
	      while (k < 4)
	      {
		      if (format[z] == types[k].fmt)
		      {
			      if (z != 0)
				      printf(", ");
			      types[k].print(args);
			      break;
		      }
		      k++;
	      }
	      z++;
      }
      printf("\n");
      va_end(args);
}

