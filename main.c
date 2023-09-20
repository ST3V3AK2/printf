#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return Always 0.
 */

int main(void)
{
	int len, len2;
	unsigned int ui;
	char *addr = "Let's try to printf a simple sentencewe.";

	len = printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("%s\n", addr);
	_printf("%s\n", addr);
	printf("Character:[%c]\n", 'H');
	_printf("Character2:[%c]\n", 'H');
	printf("Len:[%d] [%i]\n", len, len2);
	/*_printf("Len:[%d] [%i]\n", len2, len2);*/
	printf("Percent sign: %% 1\n");
	_printf("Percent sign: %% 2\n");
	return (0);
}
