#include <stdio.h>
#include <string.h>

int main(void)
{
	int ret = 1; //设置初始值为不是以qianfeng开头的情况
	char str[100] = {'\0'};
	char *substr = "qianfeng";
	int len = strlen(substr);

	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	ret = strncmp(str,substr,len);
	if(ret == 0)
		printf("用户输入的字符串以qianfeng开头!\n");
	else
		printf("用户输入的字符串不是以qianfeng开头!\n");

	return 0;
}

