#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100] = {'\0'};
	char arr[10] = {'\0'};

	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);
	getchar();
	printf("请输入要搜索的字符串:\n");
	scanf("%[^\n]",arr);

	if(strcmp(str,arr) == 0)
		printf("找到了!\n");
	else
		printf("没找到!\n");

	return 0;
}

