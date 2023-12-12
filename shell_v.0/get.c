#include "main.h"

int main(void)
{
	char *name = "PATH";
	int i = 0;
	char *key;
	char *en;

	while (environ[i] != NULL)
	{
		en = strdup(environ[i]);
		key = strtok(en, "=");
		if (strcmp(key, name) == 0)
		{
			printf("%s\n", en);
			printf("%s\n", key);
			char *value = strtok(NULL, "=");
			printf("%s\n", value);
			free(en);
			//key = strtok(NULL, "=");
			//	break;
		}
		i++;
	}
	printf("%s: \n", environ[3]);
	return (0);
}
