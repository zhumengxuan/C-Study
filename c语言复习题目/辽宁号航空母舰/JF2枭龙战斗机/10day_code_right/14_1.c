/*===============================
C语言规定：声明数组时，数组的长度必须是
常量，但是gcc编译器允许声明数组时包含
变量，但是在声明数组之前变量必须被赋值
且一旦声明，数组的长度不能再改变，声明
数组时不能被初始化，但后面可以赋值。
=================================*/

#include <stdio.h>

void arr_move(int arr[], int len, int m)
{
	int i = 0, j = 0;
	int temp = 0;

	//注意：这样移动的结果是把最后的12345放到最前面形成12345的形式
	for(i = len - m; i < len; i ++)
	{
		temp = arr[i]; //把arr[i]拿出来放到temp里面
		for(j = i; j > i - (len - m); j --)
		{
			arr[j] = arr[j - 1]; //依次挪动
		}
		arr[j] = temp;//把temp里面的内容放到最前面去
		//同时要注意这时的i是不断地增大的，所以j也是不断地
		//增大的，故j>i-(len-m)在变大，最后temp赋给arr[j]，
		//实际上是插在上一个插入的数的后面。
	}
}

int main(void)
{
	int n = 0;
	int i = 0;
	int m = 0;
	
	printf("pls input n:\n");
	scanf("%d", &n);
	int arr[n];

	for(i = 0; i < n; i ++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("pls input m:\n");
	scanf("%d", &m);
	arr_move(arr, n, m);

	for(i = 0; i < n; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

