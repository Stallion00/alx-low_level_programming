#include <stdlib.h>
#include <time.h>
/**
*main - determines if a number is positive negative or zero.
*
*Return : Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	if (n == 0)
	printf("%d is zero\n", n);
	if (n < 0)
	printf("%d is negative\n", n);
	return (0);
}
