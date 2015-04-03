#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int bin[10] = {0};
	int i = 0;
	int len = sizeof(bin)/sizeof(bin[0]);

	for(i = 0;i < len;i ++)
	{
		bin[i] = num % 2;
		num /= 2;
	}

	for(i = len-1;i >= 0;i --)
	{
		printf("%d",bin[i]);
	}
	printf("\n");

	return 0;
}

