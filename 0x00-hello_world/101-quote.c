#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *main - the principal function
 *
 *Return: 1 always returns 1
 */
int main(void)
{
  char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    while (*str)
      {
       write(STDOUT_FILENO, str, 1);
       str++;
      }
  return (1);
}
