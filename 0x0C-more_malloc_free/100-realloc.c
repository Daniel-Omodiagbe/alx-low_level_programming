#include "main.h"

/**
* *_realloc - reallocates a memory block using malloc
* @ptr: pointer to void
* @old_size: old size of memory block
* @new_size: new size of memory block
* Return: Nothing
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int len;

	ptr = malloc(old_size);
	if (ptr)
	{
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
                if (old_size == new_size)
                {
                        return (ptr);
                }
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		for (len = 0; len < old_size; len++)
		{
			((char *)ptr2)[len] = ((char *)ptr)[len];
		}
	}
	free(ptr);
	return (ptr2);
}
