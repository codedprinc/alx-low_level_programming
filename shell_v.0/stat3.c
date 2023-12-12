#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - which implementation
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s filename ...\n", av[0]);
        return 1;
    }

    char *path = getenv("PATH");
    if (path == NULL)
    {
        fprintf(stderr, "Error: PATH variable not set\n");
        return 1;
    }

    unsigned int i = 1;
    while (av[i])
    {
        printf("%s: ", av[i]);
        
        // Path concatenation logic can be added here if needed
        
        if (access(av[i], F_OK) == 0)
        {
            printf("FOUND\n");
        }
        else
        {
            printf("NOT FOUND\n");
        }
        i++;
    }

    return 0;
}
