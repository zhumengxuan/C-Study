#include <stdio.h>
//无参函数
//将参数列表设置为空(void)
void func(void)
{

}

//计算长方体体积
/*无返回值版本
  void cube(int length, int width, int height)
  {
	  int v = length * width * height;
	  printf("v = %d\n", v);
  }
 */

//void add(int x, int y, int z, double f)
void add(int x, int y)
{
	int sum = x + y;
	printf("%d + %d = %d\n", x, y, sum);
}

//带返回值的长方体计算函数
//告诉用户该函数将会返回一个整数结果
//将结果返回给该函数的调用者
int cube(int length, int width, int height)
{
	int v = length * width * height;
	//返回值
	return v;
}

int main(void)
{
	add(99, 2);
	int ret = 0;
 	//通过变量来接收函数的返回结果
	ret = cube(4, 4, 4);
	printf("ret = %d\n", ret);

	return 0;
}

