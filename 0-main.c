#include "shell.h"

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
