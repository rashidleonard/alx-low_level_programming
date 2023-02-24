#include "main.h"
/**
 * print_diagonal - print diagonal line n times.
 * @n: number of times the diagonal line is printed.
 * Return: Always 0 Success
 */
void print_diagonal(int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
