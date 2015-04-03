#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	char ch = '\0';
	ch = num + 48;

	printf("数字%d对应的字符是%c\n",num,ch);

	return 0;
}

