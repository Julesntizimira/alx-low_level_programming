#include <unistd.h>
/**
 * main - entry point
 *
 * This program writes the phrase "and that piece of art is useful" - Dora Korpar, 2015-10-19
 * to the standard error.
 * The program returns 1.
 */
int	main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

