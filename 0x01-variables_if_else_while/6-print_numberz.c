#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0 using putchar
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
