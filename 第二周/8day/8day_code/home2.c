#include <stdio.h>

void square(int *pa)
{
	*pa = *pa * *pa; //平方	
}

int main(void)
{
	int a = 0;
	printf("请输入一个数字a:\n");
	scanf("%d",&a);

	printf("a的值为:%d\n",a);

	square(&a); //求平方函数

	printf("a的平方为:%d\n",a);

	return 0;	
}

