#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/wait.h>
#include <ctype.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/sysmacros.h>

extern char **environ;

void prompt(void);
char **_tokenizer(char *cmd, char *delim);
int findfile(const char *file_n);
char *_getenv(const char *name);
#endif
