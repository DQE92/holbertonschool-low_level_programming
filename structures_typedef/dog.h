#ifndef DOG_H
#define DOG_H
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

#endif