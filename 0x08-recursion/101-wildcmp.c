# include "main.h"


int  help1(char *v1, char *v2);
int  help2(char *m1, char *m2);



int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
		return (help1(s1, (s2 + 1)));
	 if ((*s1 == *s2) && (*s1 == '\0'))
                 return 1;
	if (*s1 != *s2)
                return 0;
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	 return (0);

}
int  help1(char *v1, char *v2)
{
	 if (*v2 == '\0')
                return 1;
	if (*v2 == '*')
	{
		return (help1(v1, v2 + 1));
	}

	return (help2(v1, v2));
	
}
int  help2(char *m1, char *m2)
{
       	if (*m1 != *m2)
                return (help2(m1 + 1, m2));
	if (*m1 == *m2)
		return(wildcmp(m1, m2));
	if (*m1 == '\0')
		return 0;
	return (0);

}
int help3(char *p1, char*p2)
{
	if (*s2 == '*')
                return (help1(s1, (s2 + 1)));
         if ((*s1 == *s2) && (*s1 == '\0'))
                 return 1;
        if ((*s1 != *s2)&&(*s1 == '\0'))
                return 0;
	 if ((*s1 != *s2) && (*s1 != '\0') && (*s2 == '\0'))
                return (help4(p1 + 1, p2));

}
int help3(char *z1, char*p2)
{
	if ((*s1 != *s2) && (*s1 != '\0') && (*s2 == '\0'))
                return (help4(z1 + 1, z2));
	if ((*s1 == *s2) && (*s1 == '\0') && (*s2 == '\0'))
                return (help4(z1 + 1, z2));

}
