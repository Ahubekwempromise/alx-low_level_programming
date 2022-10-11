#include <stdio.h>
#include "dog.h"

/**
 * main - check code for Holberton School students.
 *
 * Return: Always 0
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Django", 3.5, "jay");
	printf("My name is %s, and i am %. if :) - Woof!\n" my_dog.name, my_dog.age);
	return (0);
}
