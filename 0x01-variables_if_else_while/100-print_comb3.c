#include <stdio.h>
/**
 *main - the main function
 *Return: 0 always returns 0
*/

int main(void)
{
int d_1 = 0, d_2;

while (d_1 <= 9)
{
d_2 = 0;

while (d_2 <= 9)
{
if (d_1 != d_2 && d_1 < d_2)
{
putchar(d_1 + 48);
putchar(d_2 + 48);

if (d_1 + d_2 != 17)
{
putchar(',');
putchar(' ');
}
}
d_2++;
}
d_1++
}
putchar('\n');

return (0);
}
