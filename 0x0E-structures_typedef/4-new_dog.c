#include "dog.h"
#include <stdlib.h>
/**
 * File: jdlwjldjl
 * Auth: kndkjjd
 */
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - klkwk;
 * @str: wdkwokd;k
 * Return: ljdeooeuoid
 */
int _strlen(char *str)
{
	int ss = 0;

	while (*str++)
		ss++;

	return (ss);
}
/**
 * _strcopy - thers is any thing son enkfnknflhkhf fkrnfkj eyeu
 * @dest: not even can be my secrtfl kfkhjfhk klfjlj
 * @src: dkj fhnvy ldjf
 * Return: mkl
 */
char *_strcopy(char *dest, char *src)
{
	int boc = 0;

	for (boc = 0; src[boc]; boc++)
		dest[boc] = src[boc];

	dest[boc] = '\0';

	return (dest);
}

/**
 * new_dog - ekfl;llf
 * @name: ijoiwueoipie
 * @age: how whever it takes
 * @owner: ekfekkf
 * Return: uoeuoe
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sodo;

	if (name == 0 || age < 0 || owner == 0)
		return (0);

	sodo = malloc(sizeof(dog_t));
	if (sodo == 0)
		return (0);

	sodo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (sodo->name == 0)
	{
		free(sodo);
		return (0);
	}

	sodo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (sodo->owner == 0)
	{
		free(sodo->name);
		free(sodo);
		return (0);
	}

	sodo->name = _strcopy(sodo->name, name);
	sodo->age = age;
	sodo->owner = _strcopy(sodo->owner, owner);

	return (sodo);
}
