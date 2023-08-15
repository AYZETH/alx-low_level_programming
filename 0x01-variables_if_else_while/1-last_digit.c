#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - this is the main function
 *Return: 0 always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d = n % 10;

	if (d > 5)
	{
	printf("Last digit of %i is %i and is greater than 5", n, d);
	}
	else if (d == 0)
	{
	printf("Last digit of %i is %i and is 0", n, d);
	}
	else if (d < 6 && d != 0)
	{
	printf("Last digit of %i is %i and is less than 6 and not 0");
	}
	return (0);
}
