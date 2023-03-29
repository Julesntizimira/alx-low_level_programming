  1 # include "main.h"
  2 
  3 
  4 
  5 
  6 
  7 char *_strncpy(char *dest, char *src, int n)
  8 {
  9 
 10 int  i;
 11 /*char *p = dest;
 12 
 13 while(*p != '\0')
 14 {
 15  p++;
 16 }
 17 j = p - dest;
 18 */
 19 
 20 for (i = 0; i < n; i++)
 21 {
 22 *(dest + i) = *(src + i);
 23 
 24 }
 25 /**(dest + i) = '\0';*/
 26 
 27 return (dest);
 28 
 29 
 30 
 31 }
~        
