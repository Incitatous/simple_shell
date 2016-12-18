#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
int _launch(char **args, char **envp);

int main(int argc, char **argv, char **envp)
{
    char **args;
    args[0] = "/bin/ls";

    args[1] = argv[1];

    args[2] = NULL;

    _launch(args, envp);

}

/*

 * _launch - launch a program and wait for it.

 *

 * @args: list of arguments

 * @return: returns 1 to continue running.

 */

int _launch(char **args, char **envp)

{

    pid_t pid;

    int status;

    pid = fork();

    if (pid == 0)

    {
        if (execve(args[0], args, envp) == -1)

            printf("error");

        exit(EXIT_FAILURE);

    }
    else
    {
        wait(&status);

        return (status);
    }
    return (1);

}
