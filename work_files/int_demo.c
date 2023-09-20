#include <stdio.h>

/**
 * print_int - prints an integer
 * @n: input integer
 *
 * Return: count
 */

void print_int(int n)
{
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10)
		print_int(n / 10);
	putchar(n % 10 + '0');
}

/**
 * main  - check code
 * 
 * Return: Always 0.
 */

int main(void)
{
	int i = 3456789;
	int r = -456;
	int len, len2;

	print_int(i);
	putchar('\n');
	print_int(r);
	putchar('\n');
	return (0);
}
