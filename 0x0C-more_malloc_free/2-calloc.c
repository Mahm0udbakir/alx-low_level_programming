#include <stdlib.h>
#include "main.h"

/**
  * _calloc - Enter data
  * @nmemb: input
  * @size: input
  * Return: NULL
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
