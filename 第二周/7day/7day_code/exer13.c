#include <stdio.h>

int main(void)
{
	int i = 0;
	int num = 1; //表示第一天只剩下一个桃子

	int n = 0;
	printf("请输入一个数字n，表示想要求第n天剩下的桃子个数:\n");
	scanf("%d",&n);

	for(i = 10 - n;i >= 1;i --) //第10天已经知道是1个,另外循环9次
	{
		num = (num + 1) * 2;
	}
	printf("num = %d\n",num);

	return 0;
}

