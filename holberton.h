#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct pathlist - Lists each token from the path
 *
 * @str: SE
 * @next: SE
 */
typedef struct pathlist
{
	char *str;
	struct pathlist *next;
} pathlist;

/**
 * struct builtins - Stores the builtin commands
 *
 * @s: SE
 * @function: SE
 */
typedef struct builtins
{
	char *s;
	int (*function)();
} builtins;

char **parser(char *res);
int buildpath(pathlist **head);
int _launch(char *linker, char **args, char **envp);
int check_path(char *checker, pathlist *store, char **args, char **envp);
int checkSlash(char *s);
extern char **environ;
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int myBuiltins(char **args);
int printenv(void);
int my_exit(char **args);
int _cd(char **args);
void _free(pathlist *head);

#endif
