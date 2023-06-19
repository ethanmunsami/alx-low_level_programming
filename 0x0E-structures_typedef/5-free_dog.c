#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Functiom frees dogs
  *
  * @d: The dog structure
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
