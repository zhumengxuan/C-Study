#include <stdio.h>
//打印所有的水仙花数
int main(void)
{
	int i = 0;
	int j = 0;
	int sum = 0;

	for(i = 100; i < 1000; i ++)
	{
		sum = 0;
		int temp = i;
		while(temp)
		{
			//只定义了一个变量j，却表示了个位、十位和百位
			j = temp % 10; 
			sum += j * j * j;
			//sum = sum + j*j*j;
			temp /= 10;
		}
		if(sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}

