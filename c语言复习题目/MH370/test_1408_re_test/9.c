#include <stdio.h>

void binshow(unsigned char ch)
{
	int  i = 0;
	for(i = 8;i >= 0;i --)
	{
		printf("%d",(ch>>i)&0x1);
	}
	printf("\n");
}

int main(void)
{
	unsigned char ch;
	printf("请输入一个字符:\n");
	scanf("%c",&ch);

	binshow(ch);

	return 0;
}

