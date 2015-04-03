#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = 6;

	printf("a=%d\n",a);
	printf("b=%d\n",b);

//中间值法
	int temp;
	temp = a;
	a = b;
	b = temp;	
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);

//加减法		
	a = a+b;
	b = a-b;
	a = a-b;

	printf("a=%d\n",a);
	printf("b=%d\n",b);

//异或法
	a = a^b;
	b = b^a;
	a = a^b;

	printf("a=%d\n",a);
	printf("b=%d\n",b);

	return 0;
}

