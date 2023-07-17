#ifndef DOG_MACRO_H
#define DOG_MACRO_H

/**
 * struct dog - define a new type struct dog
 * @name: name of struct dog
 * @age: age of struct dog
 * @owner: owner's name of struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
