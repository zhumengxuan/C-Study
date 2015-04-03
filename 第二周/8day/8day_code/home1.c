#include <stdio.h>

void fill_0(int *pa)
{
	*pa = 0;	
}

int main(void)
{
	int a = 0;
	printf("请输入一个数a:\n");
	scanf("%d",&a);
	
	printf("处理前的a = %d\n",a);

	fill_0(&a);

	printf("清0处理后的a = %d\n",a);

	return 0;
}

