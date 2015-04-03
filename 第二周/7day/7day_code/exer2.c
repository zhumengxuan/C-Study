#include <stdio.h>

int main(void)
{
	int i = 0;
	char ch[10] = {'\0'};
	int len = sizeof(ch)/sizeof(ch[0]);

	printf("请输入10个字符:\n");
	for(i = 0;i < len;i ++)
	{
		scanf("%c",&ch[i]);
		getchar();
	}

	printf("10个字符倒序输出:\n");
	for(i = len-1;i >= 0;i --)
	{
		printf("%c ",ch[i]);
	}
	printf("\n");

	return 0;
}

