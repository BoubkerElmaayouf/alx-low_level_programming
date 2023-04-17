#ifndef DOG.H
#define DOG.H
/**
 * struct dog - a dog's information
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
