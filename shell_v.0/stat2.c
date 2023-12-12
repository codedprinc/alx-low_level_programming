#include "main.h"
/**
 * findfile - looks for a file in the current PATH.
 * @file_n: filename to search for.
 * Return: 0 if found, 1 if not found.
 */
int findfile(const char*file_n)
{
	char *path = getenv("PATH");
	char *tkn = strtok(path, ":");
	char *full_path;
	struct stat st;
	if (path == NULL)
	{
		fprintf(stderr, "Error:PATH variable not set\n");
		return (1);
	}
	while (tkn != NULL)
	{
		full_path = malloc(strlen(tkn) + strlen(file_n) + 2);
		if (full_path == NULL)
		{
			perror("Error allocating memory");
			exit(EXIT_FAILURE);
		}
		strcpy(full_path, tkn);
		strcat(full_path, "/");
		strcat(full_path, tkn);

		if (stat(full_path, &st) == 0)
		{
			printf("%s\n", full_path);
			free(full_path);
			return (0); // file found
		}
		free(full_path);
		tkn = strtok(NULL, ":");
	}
	return (1);// file not found
}
