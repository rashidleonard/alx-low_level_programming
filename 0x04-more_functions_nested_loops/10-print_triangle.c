#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: number of lines.
 * Return: Always 0 (success).
 */
void print_triangle(int size)
{
	int i, c;

	for (i = 0; i < size; i++)
	{
		for (c = 1; c < (size - i); c++)
			_putchar(' ');
		for (c--; c < size; c++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
