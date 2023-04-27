#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;
char *_getenv(const char *name);
void execute_command(char *command, char *args[]);
char *get_input();
char **split_input(char *input);

#endif
