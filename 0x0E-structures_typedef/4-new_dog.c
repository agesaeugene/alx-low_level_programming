#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - outputs a strings length
 * @s: string to be checked
 * Return: strings length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - string pointed to by src is pointed
 * including the terminating null byte(\0)
 * buffer pointed to by dest
 * @dest: buffer pointer to which a string is copied
 * @src: string to be copied
 *
 * Return:dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';


	return (dest);
}

/**
 * new_dog - a new dog is created
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: pointer to the new dog (success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
