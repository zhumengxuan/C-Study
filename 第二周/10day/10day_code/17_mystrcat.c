#include <stdio.h>

void mystrcat(char *s1, const char *s2);
void mystrcat_p(char *s1, const char *s2)

int main(void)
{
	char *s2 = " world";
	char s1[100] = "hello";

	mystrcat_p(s1, s2);
	puts(s1);

	return 0;
}

void mystrcat_p(char *s1, const char *s2)
{
	while(*s1 != '\0')
	{
		s1 ++;
	}
	while(*s2 != '\0')
	{
		*s1 ++ = *s2 ++;
	}
	*s1 = '\0';
}

void mystrcat(char *s1, const char *s2)
{
	int index = 0;
	int i = 0;
	//strlen
	while(s1[index] != '\0')
	{
		index++;
	}
	//strcpy
	while (s2[i] != '\0')
	{
		s1[index + i] = s2[i];
		i ++;
	}
	s1[index + i] = '\0';
}

