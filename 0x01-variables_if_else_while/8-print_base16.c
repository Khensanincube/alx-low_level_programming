#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase using putchar
 *
 * Return: always (0)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; n <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
