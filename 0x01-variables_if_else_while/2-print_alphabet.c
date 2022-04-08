#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= '%'; alpha++)
{
putchar(alpha);
}

putchar('\n');


return(0);
}
