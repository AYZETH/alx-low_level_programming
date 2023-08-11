#include <stdio.h>
/**
 *main - the main function
 *
 *Return: 0 always returns 0
 */
int main(void)
{
printf("Size of a char: %c", SizeOf(char));
printf("Size of an int: %d", SizeOf(int));
printf("Size of a long int: %d", SizeOf(long int));
printf("Size of a long long int: %d", SizeOf(long long int));
printf("Size of a float: %d", SizeOf(float));
return (0);
}
