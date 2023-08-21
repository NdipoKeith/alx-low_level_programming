#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
