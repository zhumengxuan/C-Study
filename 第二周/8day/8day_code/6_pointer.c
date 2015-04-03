#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p = &i; //这里相当于1) int *p; 2) p = &i;

	printf("p=%p\n",p);// 指针变量p的地址&i (所表示的地址)
	printf("&i=%p\n",&i); //&i就是p

	printf("&p=%p\n",&p); //&p就是指针变量本身(所在的地址)
	printf("*p=%d\n",*p);//*p表示i,等于10.使用*p就等于使用i
	printf("i=%d\n",i);//变量i，和*p 相同

	return 0;
}
