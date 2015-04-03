#include <stdio.h>

char *find(char *s,int len)
{
	int i = 0;
	for(i = 0;i < len;i ++)
	{
		if(*(s + i) == 'A')
			break;
	}
	return (s+i);
}

int main(void)
{
	char arr[] = "abcdefAhijklmn";
	char *ps = NULL;
	int len = sizeof(arr)/sizeof(arr[0]);

	ps = find(arr,len);
	if(ps != NULL)
	{		
		printf("We find the lettler:\n%c\n",*ps);
		printf("Find the lettler %c at:\n%p\n",*ps,ps);
	}

	return 0;
}

