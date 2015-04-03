#include <stdio.h>

int main(void)
{
	int i = 0;
	int a = 10;
	int b = 20;
	int c = 30;
	int *arr[3] = {NULL};

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("a变量的地址:%p\n",&a);
	printf("b变量的地址:%p\n",&b);
	printf("c变量的地址:%p\n",&c);

	for (i = 0; i < 3; i ++)
	{
		// arr[i] == p	
		//*arr[i] == *p
		printf("指针arr[%d]的地址:%p\n",i,arr[i]);
	}

	return 0;
}

