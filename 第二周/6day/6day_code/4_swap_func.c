#include <stdio.h>
//全局变量
int var = 10;

void a(void)
{
	var -= 10;
}

//函数是否能交换实参的内容
void swap(int x, int y)
{
	printf("swap:交换以前:x = %d, y = %d\n", x, y);
	int tmp = x;
	x = y;
	y = tmp;
	printf("swap:交换以后:x = %d, y = %d\n", x, y);
}

int main(void)
{
	int m = 10;
	int n = 20;

	printf("交换以前:m = %d, n = %d\n", m, n);
	swap(m, n);
	printf("交换以后:m = %d, n = %d\n", m, n);
	
	return 0;
}

