#ifndef _NAME_
#define _NAME_

/**
 * struck dog - it type of functions
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: its a struck
 */
struct dog
{
	char * name;
	float age;
	char * owner;
};

/**
 * dog_t - it is a short name for struck dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


