#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
void free_dog(dog_t *d);

#endif /* DOG_H */
