#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: name of the dog
 * @age: age
 * @owner: name of the owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
