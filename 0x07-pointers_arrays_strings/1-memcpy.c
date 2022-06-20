#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 * Return: A pointer to the destination buffer @dest.
 */
char _memcpy(void *dest, const void *src, size_t n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
