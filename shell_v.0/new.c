#include "main.h"
/**
 * _which - looks for files in the CURRENT PATH
 * @f_n: array that holds the flenames.
 */
void _which(char *f_n[])
{
	unsigned int i;
	struct stat st;
	i = 0;

	while (f_n[i])
	{
		printf("%s:", f_n[i]);
		if (stat(f_n[i], &st) == 0)
		{
			write(1, "FOUND\n", 10);
		}
		else
		{
			printf("NOT FOUND\n");
		}
		i++;
	}
}

int main(int ac, char** av)
{
	if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
	_which(av);
	return(0);
}
