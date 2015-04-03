#include <stdio.h>
//宏定义指令	宏名	宏体
#define PI	3.14159
//#define N	100
#define G	9.8
/*
   1)标识符
   2)大写,不加分号结束
*/
#define N 10

int main(void)
{
	//int N = 100;
	int arr[N] = {0};

	int i = 0;
	for (i = 0; i < N;i ++)
	{
		arr[i] = i  + 1;
		printf("%d ", arr[i]);
	}

	printf("\nPI = %f\n", PI);
	printf("G = %.2f\n", G);
	
	return 0;
}

