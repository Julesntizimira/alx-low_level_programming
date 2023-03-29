  1 # include "main.h"
  2 
  3 char *_strncat(char *dest, char *src, int n)
  4 {
  5 
  6 
  7 
  8    char *p = dest;
  9    int z, j;
 10 
 11 
 12 
 13   while (*p != '\0')
 14   {
 15  p++;
 16   }
 17 
 18   j = p - dest;
 19 
 20 
 21 
 22 
 23   for (z = 0; z <  n; z++)
 24   {
 25   *(dest + j) = *(src + z);
 26   j++;
 27   }
 28 
 29   return (dest);
 30 
 31 
 32 }
~       
