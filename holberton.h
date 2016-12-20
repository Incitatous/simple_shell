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

typedef struct pathlist
{
	char *str;
	struct pathlist *next;
} pathlist;

char **parser(char *res);
int buildpath(pathlist **head);
int _launch(char *linker, char **args, char **envp);
int check_path(char *checker, pathlist *store, char **args, char **envp);
int checkSlash(char *s);
extern char **environ;

#endif
