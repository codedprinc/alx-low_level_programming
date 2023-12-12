#include "main.h"
/**
 * main - prints the address of env (the third parameter of the main function)
 * and environ (the global variable).
 * @ac: counter
 * @av: argument array
 * @env: environment.
 */

int main(int ac, char **av, char **env)
{
	void *ptr, *ptrenv;
	ptr = &env;
	ptrenv = &environ;
	printf("%p - env's address\n", ptr);
	printf("%p - environ's address\n", ptrenv);
	//printf("%p - env's address\n", *ptr);
	//printf("%p - environ's address\n", *ptrenv);
	return (0);
}
