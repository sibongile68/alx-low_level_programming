#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success0
 */

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
}
else
{
putchar('\n');
return (0);
}
 
