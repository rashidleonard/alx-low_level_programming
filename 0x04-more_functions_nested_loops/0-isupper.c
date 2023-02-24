#include "main.h"
/**
 * int _isupper(int c) - checks for upercase character
 * @c: input character.
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
