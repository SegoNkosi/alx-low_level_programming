#include <stdlib.h>
#include "dog.h"


/**
* free_dog - this function frees memory
* allocated for a struct dog
* @d: struct dog to free
*/

void free_dog(dog_t *b)
{
	if (b)
	{
		free(b->name);
		free(b->owner);
		free(b);
	}
}

