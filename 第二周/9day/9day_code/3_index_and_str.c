#include <stdio.h>

void amend(char *s,int len)
{
	int i = 0;
	printf("The old string is:\n");
	printf("%s\n",s);

	for(i = 0;i < len;i ++)
	{
		if(*(s+i) == 'm')
			*(s+i) = 'w';
	}

	printf("The new string is:\n");
	printf("%s\n",s);
}

int main(void)
{
	char arr[] = "Hello morld!"; //写错了，现在通过指针修改
	//char *arr = "Hello morld!"; //写成字符串常量的形式是不行的，会报错
	int len = sizeof(arr)/sizeof(arr[0]);

	amend(arr,len);

	return 0;
}

