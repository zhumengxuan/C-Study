#include <stdio.h>

int main(void)
{
	//error: size of array ‘a’ is negative
	//int a[-1];  //产生编译错误
	//int a[100]; //在编译时候就会确定内存大小和空间
	int n = 0;
	printf("pls input n:\n");
	scanf("%d", &n); //产生运行错误
	//Segmentation fault: 11
	int arr[n]; //= {1,2,3,4}; 
				//只要长度确定,不能再改变
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("len1 = %d\n", len);
	
	n = 99; //给n重新赋值，会怎么样呢？
	len = sizeof(arr) / sizeof(arr[0]);
	printf("len2 = %d\n", len);
	printf("n = %d\n", n);

	return 0;
}

