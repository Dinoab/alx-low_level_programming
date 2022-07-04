#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	 return (0);
}
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name of structure
 * @name: string of characters
 * @age: float
 * @owner: string of characters
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcp(char *dest, char *src);
int _strl(char *s);
void free_dog(dog_t *d);
#endif
