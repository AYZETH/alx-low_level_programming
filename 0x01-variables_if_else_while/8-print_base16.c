#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/

int main(void)
{
int d = 48;

while (d <= 102)
{
putchar(d);

if (d == 57)
{
d += 39;
}
d++;
}
putchar('\n');

return (0);
}
