#include <stdio.h>

int *func(int a)
{
	printf("&a = %p\n",&a);
	//a是局部变量，地址存储在栈中，函数结束的时候此地址被释放
	return &a; 
}

int main(void)
{
	int a = 10;
	int *p = NULL;

	//接收一个被释放掉的指针
	p = func(a); 
	//为什么一直在变？因为这个变量的内存分配在栈中
	printf("p = %p\n",p);
	printf("&p = %p\n",&p);

	//注意：这个指针是可以接收这个函数返回的地址的，只不过这个地址被
	//释放掉了，所以用*p去访问的时候就会得不到正确的结果
	printf("*p = %d\n",*p);//得不到正确的结果

	return 0;
}

