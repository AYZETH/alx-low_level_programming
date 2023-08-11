#include <stdio.h>
/**
 *main - the main function
 *
 *Return: 0 always returns 0
 */
int main(void)
{
printf("Size of a char: %c\n", SizeOf(char));
printf("Size of an int: %d\n", SizeOf(int));
printf("Size of a long int: %ld\n", SizeOf(long int));
printf("Size of a long long int: %lld\n", SizeOf(long long int));
printf("Size of a float: %f\n", SizeOf(float));
return (0);
}
