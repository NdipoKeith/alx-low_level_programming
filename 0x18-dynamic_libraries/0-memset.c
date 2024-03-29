#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: first byte of the memory
 * @s: input
 * @b: constant byte
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
