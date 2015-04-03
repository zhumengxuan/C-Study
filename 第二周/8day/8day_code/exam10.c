#include <stdio.h>

int main(void)
{
	char ch = '\0';
	short a = 0;
	int b = 0;

	char *pch = &ch;
	short *pa = &a;
	int *pb = &b;

	printf("pch = %p\n",pch);
	printf("pa = %p\n",pa);
	printf("pb = %p\n",pb);

	printf("pch + 1 = %p\n",pch + 1);
	printf("pa + 1 = %p\n",pa + 1);
	printf("pb + 1 = %p\n",pb + 1);

	return 0;
}

