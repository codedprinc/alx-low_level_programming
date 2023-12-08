#include "main.h"
/**
 * prompt - acts a s shell prompt.
 * @void: no arg.
 */
void prompt(void)
{
	char *line = NULL;
	char *line_copy = NULL;
	char **argv = NULL;
	size_t len = 0;
	ssize_t nread;
	pid_t child_pid;
	int status;

	while (1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);

		if (nread == -1)
		{
			printf("error\n");
			break;
		}

		if (strcmp(line, "exit\n") == 0)
		{
			break;
		}

		line[strcspn(line, "\n")] = '\0';
		if ((strncmp(line, "./", 2) == 0) || (strncmp(line, "/", 1) == 0))
		{
			argv = _tokenizer(line, " \n\t");
			child_pid = fork();
/*			int status;*/
			if (child_pid == -1)
			{
				perror("Fail\n");
				exit(EXIT_FAILURE);
			}
			else if (child_pid == 0)
			{
				if (execve(argv[0], argv, NULL) == -1)
					{
						perror("eRROR:\n");
					}
			}
			else
			{
				wait(&status);
			}
		}
		else
		{
			printf("%s\n", line);
		}
		free(line_copy);
	}
	free(line);
}
