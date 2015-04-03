#include <stdio.h>
/*
	斐波那切数列递归规律
		1 1 2 3 5 8 13 21 34 55。。。 
		f(n) = f(n - 1) + f(n - 2)
   递归开始:   
   		n     //说明是先要知道n有多大
   递归结束:   
   		n == 1 || n == 2
   函数体:	   
   		return  f(n - 1) + f(n - 2)
*/
int fb(int n) //斐波那契数列的第n项
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fb(n - 1) + fb(n - 2);
}

int main(void)
{
	int i = 0;
	int ret = 0;
	//递归的效率差,这里需要等15~20秒左右才能计算完
	//ret = fb(50);  
	ret = fb(10);
	printf("ret = %d\n", ret);

	//用一个循环，输出斐波那契数列的前i项
		for(i = 1;i <= 20;i ++)
		{
			printf("%d\t",fb(i));
			if(i % 5 == 0)
				printf("\n");
		}

	return 0;
}

