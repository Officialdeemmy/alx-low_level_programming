#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy string
 * @dest: dest string
 * @src: source string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = _strlen(src);
	for (i = 0; i < count; i++)
		dest[i] = src [i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Returm: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1= _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return NULL;
	ndog->name = malloc(sizeof(char) * len1 + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizepf(char) * len2 + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
}
