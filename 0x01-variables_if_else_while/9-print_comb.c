#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 9)
{
if (i > 0 || j > 0)
{
putchar(',');
putchar(' ');
}
putchar('0' + i);
putchar('0' + j);
j++;
}
i++;
}
putchar('\n');
return (0);
}
