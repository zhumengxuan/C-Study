#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	printf("pls input a:\n");
	scanf("%d",&a);
	b = a;//备份

	if(a<0)
		a = -a;
	printf("%d的绝对值是%d!\n",b,a);

	return 0;
}

