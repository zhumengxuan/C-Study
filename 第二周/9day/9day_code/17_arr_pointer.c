#include <stdio.h>
/*
void func2(int *p)
{
	sizeof(p[0]);
	sizeof(p);
}
*/
void func(int (*p)[3], int row)
{
	//求二维数组中第一个元素的大小
	int c = sizeof(p[0]);  
	int r = sizeof(p);
	printf("c = %d\nr = %d\n", c, r);
}

int main(void)
{
	int arr[3][3] = {9,8,7,6,5,4,3,2,1};
	//声明一个指向第二维有3个元素的
	//二维数组
	int (*p)[3] = arr;

	printf("%d\n", p[0][0]);
	printf("%d\n", *(*(p + 0) + 1));
	printf("%d\n", *(*(p + 1) + 2));
	printf("%d\n", *(*(p + 2) + 2));
	//*(p + 0) == arr[0];
	//*(*(p + 0) + 2) == *arr[0][2]
	func(arr, 3);

	return 0;
}

