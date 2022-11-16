#include "shell.h"

/**
 * main - Random program that makes Betty proud
 * Description: Same as above
 * Return: Always 0
 */

int main(void)
{
	char *name;
	int age;

	printf("Welcome! Please input your name -->\n");
	scanf("%s", &name);
	printf("Thank you %s, please input your age -->\n");
	scanf("%d", &age);
	printf("Welcome %s to Shell Projects, You are %d years old", name, age);

	return (0);
}
