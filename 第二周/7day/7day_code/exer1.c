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

	printf("10个字符分别为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%c ",ch[i]);
	}
	printf("\n");

	return 0;
}

