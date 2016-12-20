# simple_shell
[Recreation of a unix-like simplified shell](https://github.com/Incitatous/simple_shell).

The simple_shell was created by [Max Johnson](https://github.com/Mj31508) and [Ian](https://github.com/Incitatous).

#Description
simple_shell works as a normal shell, but does not offer the same exhaustivity and flexibility. It handles simple commands.

These are the functions and system calls allowed in order to complete this assignment:


    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    fork (man 2 fork)
    free (man 3 free)
    fstat (man 2 fstat)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    kill (man 2 kill)
    lstat (man 2 lstat)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (man 2 stat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)
    _exit (man 2 _exit)

Please note, however, that this is a simplified shell and, as such, it does not take into account scripting or complex commands using piping.

#Example
Among other commands, simple_shell handles ls, rm, echo, chmod and all the other commands in the /bin.

NB: This shell follows the Betty [style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [formatting](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) guidelines.
