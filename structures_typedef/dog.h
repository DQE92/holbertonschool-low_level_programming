#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - a structure to represent a dog
 * name: pointer to a char (dog's name)
 * age: float (dog's age)
 * owner: pointer to a char (dog's owner)
 *
 * Description: This structure stores information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
