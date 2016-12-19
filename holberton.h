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

typedef struct kina_san
{
	char *str;
	struct kina_san *next;
} kina_san;

char **parser(char *res);
int buildpath(kina_san **head);
int _launch(char *linker, char **args, char **envp);
int check_path(char *checker, kina_san *store, char **args, char **envp);

#endif
