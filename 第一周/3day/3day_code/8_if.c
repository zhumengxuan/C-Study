#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("pls input x:\n");
	scanf("%d",&x);

	if(3 < x < 7)//这样写是错误的
		printf("在范围内！\n");
	
	return 0;
}

