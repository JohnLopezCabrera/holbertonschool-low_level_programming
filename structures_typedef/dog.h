#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's info
 * @name: First
 * @age: Second
 * @owner: Third
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
