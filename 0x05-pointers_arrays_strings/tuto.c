#include <stdio.h>
//#include "main.h"



int main(void)
{

	char *lan = "hello world";

	int i = sizeof(lan) / sizeof(*lan);

	printf("%d\n", i);

	return (0);

}
