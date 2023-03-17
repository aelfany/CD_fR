#include<libc.h>

char    *freed(char **p1, char **p2)
{
    if (*p1 != NULL)
    {
        free(*p1);
        *p1 = NULL;
    }
    if (*p2 != NULL)
    {
        free(*p2);
        *p2 = NULL;
    }
    return (NULL);
}

char  *func(char *s1, char *s2)
{
	int a = 0;
	s1 = malloc(100);
	s2 = malloc(100);
  //	if (a == 0)
    return (freed(&s1, &s2), NULL);
}
