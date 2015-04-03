#include <stdio.h>

void swap(int *pa,int *pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void)
{
	int a = 0;
	printf("请输入数字a:\n");
	scanf("%d",&a);

	int b = 0;
	printf("请输入数字b:\n");
	scanf("%d",&b);
	
	printf("交换前:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	swap(&a,&b); //交换两个数的函数

	printf("交换后:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);

	return 0;
}

