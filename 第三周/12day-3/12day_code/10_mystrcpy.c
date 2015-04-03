#include <stdio.h>
#include <string.h>
#include <assert.h>

//hello baby
char *mystrcpy(char *dest,char *src)
{
	char *d = dest;
	char *s = src;
	int count = 0;

	assert(dest);
	assert(src);

	if(dest == src)
		return src;

	count = strlen(src) + 1;
	if(count <= 1)
		return NULL;

	if(dest < src||dest > src + count)
	{
		while(count--)
		{
			*d ++ = *s ++;
		}
	}
	else
	{
		d = d + count - 1;
		s = s + count - 1;

		while(count--)
		{
			*d-- = *s--;
		}
	}

	return dest;
}

int main(void)
{
	char s1[] = "hello baby";
	char s2[50];

	mystrcpy(s2,s1);
	
	printf("The s2_string is:\n");
	printf("%s\n",s2);

	return 0;
}

