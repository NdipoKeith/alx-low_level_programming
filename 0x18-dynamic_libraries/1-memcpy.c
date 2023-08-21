#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: funtion copies
 * @src: bytes from memory area
 * @dest: where memory area is stored
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
