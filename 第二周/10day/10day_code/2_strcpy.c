#include <stdio.h>
#include <string.h>

int main(void)
{
	char *src = "hello world";
	char dest[100] = "hello";
	//从源的第五个元素开始拷贝
	//从目标的第五个元素开始粘贴
	strcpy(dest + 5, src + 5);
	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	//strncpy
	char dest2[100] = {'\0'};
	int i = 0;
	for (i = 0; i < 100;i ++)
	{
		dest2[i] = 'a';
	}
	strncpy(dest2, src + 2, 3);
	printf("dest2 = %s\n", dest2);

	return 0;
}

