#include "holberton.h"

int check_path(char *checker, kina_san *store)
{
  char *path;
  path = malloc(1000);
	while (store != NULL)
	{
	  strcpy(path, store->str);
	  strcat(path, "/");
	  strcat(path, checker);
	  printf("%s\n", path);
	  store = store->next;
//		if (access(store, X_OK) == 0)
		/* execute _launch.c */	
//			
	}
}
