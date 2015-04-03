#include <stdio.h>

void func(int *pa,int *pb)
{
	int temp = 0;
	int temp1 = 0;

	temp = *pa + *pb;
	temp1 = *pa - *pb;
	*pa = temp;
	*pb = temp1;
}

int main(void)
{
	int a = 0;
	int b = 0;

	printf("请输入数字a:\n");
	scanf("%d",&a);
	printf("请输入数字b:\n");
	scanf("%d",&b);

	printf("处理前a = %d\n",a);
	printf("处理前b = %d\n",b);
	
	func(&a,&b);

	printf("处理后a = %d\n",a);
	printf("处理后b = %d\n",b);

	return 0;
}

