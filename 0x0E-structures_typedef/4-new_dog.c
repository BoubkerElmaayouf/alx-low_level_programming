#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen -a function that returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - a function that copies the string pointed to by copie
 * @dst: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dst, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (dst);
}
/**
 * new_dog -  a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1 = _strlen(name);
	int length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
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
