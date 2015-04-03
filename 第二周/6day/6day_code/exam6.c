#include <stdio.h>

void hex(int x);

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	hex(num);
	printf("\n");

	return 0;
}

void hex(int x)
{
	if(x == 0)
	{
		printf("0x0");
		return;
	}
	hex(x / 16);
	printf("%x", x % 16);
	/*
	switch(x % 16)
	{
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		default :
			printf("%d", x % 16);
	}
	*/
	//%x输出十六进制数
}

