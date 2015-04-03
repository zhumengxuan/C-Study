#include <stdio.h>

int main(void)
{
	int a = 9;
	int *p = NULL;
	int *p2 = NULL;

	p = &a;
	printf("p1=%p\n",p);

	p2 = p;
	printf("p2=%p\n",p2);

	p = 3;
	printf("p3=%p\n",p);

	p  = 0x3;
	printf("p4=%p\n",p);

	p  =(int *)0x3;
	printf("p5=%p\n",p);

	return 0;
}

