#include <stdio.h>

int is_avg_integer(int * a, int n)
{
	int i = 0;
	float sum = 0.0;
	float aver = 0.0;

	for(i = 0; i < n; i ++)
	{
		sum += a[i];
	}

	aver = sum / n;

	if((int)aver == aver)
		return 1;
	else
		return 0;
}

int main(void)
{
	int arr[] = {1,2,3,4,5,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	int ret = is_avg_integer(arr,len);
	if(ret)
		printf("平均值是整数\n");
	else
		printf("平均值不是整数\n");

	return 0;
}

