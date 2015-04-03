#include <stdio.h>

int numberOfCirle(int n,int m)
{
	int i = 0;
	int index = 0;

	for(i = 2;i <= n;i ++)
	{
		//利用公式来求
		index = (index + m) % i;
	}
	return index + 1;
}

int main(void)
{
	int n =  0;
	printf("pls input n:\n");
	scanf("%d",&n);

	int m = 0;
	printf("pls input m:\n");
	scanf("%d",&m);

	int ret = 0;
	ret = numberOfCirle(n,m);
	printf("最后剩下的人是原来的第%d号。\n",ret);

	return 0;
}

