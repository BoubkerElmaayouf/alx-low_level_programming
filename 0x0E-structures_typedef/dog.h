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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
