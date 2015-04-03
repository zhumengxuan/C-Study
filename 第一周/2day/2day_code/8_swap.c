#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = 6;

	printf("交换前:\n");
	printf("a=%d\t",a);
	printf("b=%d\n",b);

	int temp = 0;
	temp = a;
	a = b;
	b = temp;	
	
/*	
	a = a^b;
	b = b^a;
	a = a^b;
*/
	printf("交换后:\n");
	printf("a=%d\t",a);
	printf("b=%d\n",b);

	return 0;
}

