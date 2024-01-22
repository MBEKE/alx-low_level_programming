#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates elements of a dog.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 *
 * Description: The structure shows the dogs name, its age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
