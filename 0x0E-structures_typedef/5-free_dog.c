#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - oik hb nj mk 
 * @d: ettegf bvkjf
 * File: oikj bhg cf
 * Auth: we hjgjh cfddn
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
