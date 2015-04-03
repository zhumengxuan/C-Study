#include <stdio.h>

int myPOW(int x,int n)
{
	int i = 0;
	int ret = 1;

	for(i = 1;i <= n;i ++)	
	{
		ret *= x;
	}
	return ret;
}

int main(void)
{
	int x = 0;
	int n = 0;
	
	printf("请输入一个正数x:\n");
	scanf("%d",&x);
	printf("请输入表示次方的数n:\n");
	scanf("%d",&n);

	int ret = 0;
	ret = myPOW(x,n);
	printf("ret = %d\n",ret);

	return 0;
}

