#include <stdio.h>

void up_down_sort()
{
	int i = 0;
	int count = 1;
	int arr[10] = {0};
	
	printf("pls input 10 numbers:\n");
	for (i = 0; i < 10; i ++)
	{
		scanf("%d", arr + i);//从键盘接收10个数
	}

	printf("%d %d ", arr[0], arr[1]);
	//不管是升序还是降序，先打印头两个数

	for (i = 2; i < 10; i ++)
	{
		if ((arr[i-2] < arr[i-1]) && (arr[i-1] < arr[i]))
		//维持升序条件
		{
			printf("%d ", arr[i]);
			//如果保持升序状态，就打印第三个数和以后的升序数字
		}
		else if((arr[i-2] > arr[i-1]) && (arr[i-1] > arr[i]))
		//降序条件
		{
			printf("%d ", arr[i]);
			//如果保持降序状态，就打印第三个数和以后的降序数字
		}
		else
		{
			printf("\n%d %d ", arr[i-1], arr[i]);
			//打印拐点处的两个数
			count++;//出现拐点就计数
		}
	}
	printf("\n序列数:%d\n", count);
}

int main(void)
{
	up_down_sort();

	return 0;
}

