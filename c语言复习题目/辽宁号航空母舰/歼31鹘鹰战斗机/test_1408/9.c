#include <stdio.h>

void binshow(unsigned short num)
{
	int i = 0;
	for(i = 16-1;i >= 0; i --)	
	{
		printf("%d",(num>>i)&0x1);
	}
	printf("\n");
}

int main(void)
{
	unsigned short num = 0;
	printf("pls input num:\n");
	scanf("%hu",&num);

	binshow(num);

	return 0;
}

