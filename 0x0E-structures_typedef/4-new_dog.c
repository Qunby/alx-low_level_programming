#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creaes a new dog
 * @age: age of dog
 * @name: name of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ar, ox, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ar = 0; name[ar]; ar++)
		;
	ar++;
	dog->name = malloc(ar * sizeof(char));
			if (dog->name == NULL)
			{
			free(dog);
			return (NULL);
			}
			for (i = 0; i < ar; i++)
			dog->name[i] = name[i];
			dog->age = age;
			for (ox = 0; owner[ox]; ox++)
			;
			ox++;
			dog->owner = malloc(ox * sizeof(char));
			if (dog->owner == NULL)
			{
			free(dog->name);
			free(dog);
			return (NULL);
			}
			for (i = 0; i < ox; i++)
			dog->owner[i] = owner[i];
			return (dog);
}
