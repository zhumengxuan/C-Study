#include <stdio.h>

int numOfOlnString(const char *p)
{
	int count = 0;
	int i = 0;
	
	while(p[i] != '\0')	
	{
		if(p[i] == 'o'||p[i] == 'O')
			count ++;
		i ++;
	}
	return count;
}

int main(void)
{
	int count = 0;
	char *p = "hello world!";
	
	count = numOfOlnString(p);
	printf("字母O或o一共出现了%d次!\n",count);

	return 0;
}

