#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  printf("%d is positive\n", n);
	else if (n == 0)
	  printf("%d is zero\n", n);
	else if (n < 0)
	  printf("%d is negative\n", n);
	return (0);
}
