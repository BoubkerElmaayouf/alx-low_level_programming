#ifndef DOG_H
#define DOG_H

/**
  * struct dog - describing a dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  *
  * Description: A new type describing a dog,
  * containing information about its name,
  * age, and owner.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structure dog
 */
typedef struct dog dog_t;

int _strlen(char *s);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
