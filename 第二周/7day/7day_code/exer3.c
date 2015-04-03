#include <stdio.h>

int main(void)
{
	int i = 0;
	int b[5] = {1,2,3,4,5};
	int a[5] = {0};

	int len = sizeof(b)/sizeof(b[0]);
//	int len1 = sizeof(a)/sizeof(a[0]);
	
	printf("数组b的元素分别为:\n");
	for(i = 0;i < len; i ++)
	{
		printf("%3d",b[i]);
	}
	printf("\n");

	for(i = 0;i < len;i ++)
	{
		a[i] = b[i];
	}

	printf("数组a的元素分别为:\n");
	for(i = 0;i < len; i ++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");

	return 0;
}

