#include <stdio.h>
//通过指针变量交换2个变量的值
int main(void)
{
	int m = 10;
	int n = 20;

	int *pm = &m;
	int *pn = &n;
	//Segmentation fault: 11
	//tmp中保存的是一个随机数
	//系统会将该随机数认为是一个地址
	//野指针
//	int mid;
//	int *tmp = &mid;
	int *tmp = NULL;//为什么错？编译是可以通过的，但是运行的时候出现段错误！
	*tmp = *pm; //既然是野指针，那么*tmp就没有意义
	*pm = *pn;
	*pn = *tmp;

	printf("m = %d, n = %d\n", m, n);

	return 0;
}

