#include <stdio.h>

int main(void)
{
	int a = 9;
	double *p1 = NULL;
	int  *p2 = NULL;

	p2 = &a;
	printf("p2=%p\n",p2);
	printf("a=%d\n",*p2);

	p1 = p2;  //不同类型指针之间赋值
	printf("p1=%p\n",p1);  //地址可以正确拿到
	printf("a=%d\n",*p1);  //拿不到正确的值
	printf("a=%d\n",(int)(*p1));  //拿不到正确的值

	return 0;
}

