#ifndef DOG_H
#define DOG_H
/**
 * dog - tells us about dog
 * name: name of the dog
 * age: age of the dog
 * owner: name of the owner of the dog
 * Description: Gives us some information about a particular dog, the name, age and the owner's name.
 */

typedef struct dog dog_t
{
    char *name;
    float age;
    char *owner;
}

#endif
