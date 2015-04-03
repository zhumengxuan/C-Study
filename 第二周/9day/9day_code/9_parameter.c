#include <stdio.h>
#include <string.h>

int printer(int (*p1)(void),int (*p2)(void))
{
	int sum = 0;
	sum = p1() + p2();
//	printf("sum = %d\n",sum);
	return sum;
}

int func1(void)
{
	int a = 3;//局部变量是可以返回的
	return a;
}

int func2(void)
{
	int b = 7;
	return b;
}
/*  //错误写法
void print(int (*p3)(int (*p1)(void),int (*p2)(void)))
{
	printf("sum=%d\n",p3(p1,p2));
}
*/

void print(int (*p3)(int (*)(),int (*)()),int (*p1)(),int (*p2)())
{
	int sum = 0 ;
	sum  = p3(p1,p2);
	//printf("sum=%d\n",p3(p1,p2));//或这样也行
	printf("sum=%d\n",sum);
}

/*  //这种写法能得到结果，但是会报很多警告，说明还是要把指针的类型写明白
void print(int (*p3)(int *,int *),int (*p1)(),int (*p2)())
{
	printf("sum=%d\n",p3(p1,p2));
}
*/
int main(void)
{
	//指向一个带int返回值
	//并且有2个int类型参数的函数
//	int (*p3)(int, int);

	printer(func1,func2);
	print(printer,func1,func2);

	return 0;
}

