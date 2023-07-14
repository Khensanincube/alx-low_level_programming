#include <stdio.h>
/**
 * main - to print the alphabet in lowercase and then in uppercase
 *
 * Return: always (0)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
