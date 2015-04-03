#include <stdio.h>

void binshow(int num,int len)
{
	int i = 0;
	for(i = len - 1;i >= 0;i --)	
	{
		printf("%d",(num>>i)&0x1);
	}
	printf("\n");
}

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int len = 0;
	printf("pls input len:\n");
	scanf("%d",&len);

	binshow(num,len);

	return 0;
}

