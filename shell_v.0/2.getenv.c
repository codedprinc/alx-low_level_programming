#include "main.h"
char *_getenv(const char *name)
{
	int i = 0;
	char *en;
	char *key;
	char *value;
	printf("name:%s\n", name);
	while (environ[i] != NULL)
	{
		en = strdup(environ[i]);
		key = strtok(en, "=");
		if (strcmp(key, name) == 0)
		{
			value = strtok(NULL, "=");
			free(en);
			return(value);
		}
		i++;
	}
	return NULL;
}

int main(void)
{
	const char *var = "PATH";
	char *p =_getenv(var);
	printf("%s\n", p);
	return(0);
}
