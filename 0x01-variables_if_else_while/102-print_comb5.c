#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/

int main(void)
{
int d_1 = 0, d_2;

while (d_1 <= 99)
{
d_2 = d_1;

while (d_2 <= 99)
{
if (d_2 != d_1)
{
putchar((d_1 / 10) + 48);
putchar((d_1 % 10) + 48);
putchar(' ');
putchar((d_2 / 10) + 48);
putchar((d_2 % 10) + 48);

if (d_1 != 98 || d_2 != 99)
{
putchar(',');
putchar(' ');
}
}
d_2++;
}
d_1++;
}
putchar('\n');

return (0);
}
