#include <stdio.h>

/**
 *main - Entry point
 *[A main - Entry point[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D Return: Always 0 (success)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'Q')
continue;

else if (alphabet == 'e')
continue;

putchar (alphabet);
}

putchar ('\n');

return (0);

}
