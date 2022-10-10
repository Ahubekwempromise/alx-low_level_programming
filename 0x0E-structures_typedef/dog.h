#ifndef _DOG_H_FILE_
#define _DOG_H_FILE_

/**
 * struct dog - structure definition of a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_ t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_ t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
