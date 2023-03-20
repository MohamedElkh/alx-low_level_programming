#ifndef _NAME_
#define _NAME_

/**
 * struct dog - it type of functions
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: its a struct
 */
typedef struct dog
{
	char  *name;
	float  age;
	char  *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *d);
char *_copy(char *s, char *c);
#endif


