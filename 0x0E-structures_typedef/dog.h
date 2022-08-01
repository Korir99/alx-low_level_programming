#ifndef DOG_H
#define DOG_H
/**
* struct dog - description of the dog
*@name: name of dog
*@age: age of the dog
*@owner: owner od the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
