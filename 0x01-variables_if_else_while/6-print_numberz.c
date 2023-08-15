#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/

int main(void)
{
int d = 0;

while (d <= 9)
{
putchar(d + '0');
d++;
}
putchar('\n');

return (0);
}
