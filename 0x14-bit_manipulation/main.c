# include <stdio.h>


unsigned int _pow(unsigned int a, unsigned int b)
{

        unsigned int i = 0, powr = 1;
        if (b == 0)
                return (1);
        while (i < b)
        {
                powr = powr * a;
		i++;
        }
	return powr;
}
int main(void)
{

	printf("%d\n", _pow(2,8));
	return 0;

}

