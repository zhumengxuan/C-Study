#include <stdio.h>
#include <math.h>
//筛选法求素数
int main(void)
{
	int i = 0;
	int j = 0;
	int N = 0;
	int count = 0;
	printf("pls input a N:\n");
	scanf("%d",&N);
	
	int a[N + 1];
	for(i = 1;i <= N;i ++)
		a[i] = i; //把相应数赋给数组的各个元素，很巧妙

	//for_for_if_if挖!
	for(i = 2;i <= sqrt(N); i ++) //外循环控制除数
	{
		for(j = i + 1;j <= N;j++)  //内循环控制被除数
		{
			if(a[i] != 0 &&a[j] != 0)
				if(a[j]%a[i] == 0)//跟2取余筛掉一批，跟3.。。跟4.。。
					a[j] = 0;  //把非素数挖掉
		}
	}

	for(i = 2;i <= N;i ++)
	{
		if(a[i] != 0)
		{
			printf("%5d",a[i]);
			count ++;
			if(count % 10 == 0)
				printf("\n");
		}
	}
	printf("\ncount = %d\n",count);

	return 0;
}

