#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;

/**
 * struct dog - structure to hold dog info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 *
 * Description: Holding the structre for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

