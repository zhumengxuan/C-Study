#include <stdio.h>
#include <math.h>
//筛选法求素数,M~N之间
int main(void)
{
	int i = 0;
	int j = 0;
	int M = 0;
	int N = 0;
	int count = 0;
	
	printf("pls input M:\n");
	scanf("%d",&M);
	printf("pls input N:\n");
	scanf("%d",&N);
	
	int a[N+1];
	for(i=M;i<=N;i++)
		a[i] = i;

	for(i = 2;i <= sqrt(N); i ++) //外循环控制除数
	{
		for(j = M;j <= N;j++)  //内循环控制被除数
		{
			if(a[j] != 0 && i != 0&&a[j] != i)
				if(a[j]%i == 0)//跟2取余筛掉一批，跟3.。。跟4.。。
					a[j] = 0;  //把非素数挖掉
		}
	}

	for(i=M;i<=N;i++)
	{
		if(a[i] == 1)
			a[i] = 0;

		if(a[i] != 0)
		{
			printf("%-5d",a[i]);
			count++;
			if(count%10==0)
				printf("\n");
		}
	}

	if(count % 10 != 0) //要打印的总数不能被10整除才手动换行
		printf("\n"); //要打印的数刚好被10整除的情况，这里不再
			//打印换行，由上面的代码完成换行功能

	printf("count=%d\n",count);

	return 0;
}

