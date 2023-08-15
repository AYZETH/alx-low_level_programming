#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/

int main(void)
{
char c = 'a';
char C = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}

while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');

return (0);
}
