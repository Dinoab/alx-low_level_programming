#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates old to new, set conditions from problem
 * returning dest w/ size of malloc new_size, set src as ptr
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);
	for (index = 0; index < old_size && index < new_size; index++)
		free(ptr);
	return (dest);
}
