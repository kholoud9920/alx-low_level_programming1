#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
int main(void)
{
	 char s1[98] = "Hello ";
	 char s2[] = "World!\n";
	  char *ptr;
	  
	  printf("%s\n", s1);
	  printf("%s", s2);
	   ptr = _strcat(s1, s2);
	   printf("%s", s1);
	    printf("%s", s2);
	     printf("%s", ptr);
	      return (0);
}
