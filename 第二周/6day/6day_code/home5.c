#include <stdio.h>

void tran(int num)
{
	if(num > 0)
	{
		tran(num-1);
		printf("*");
	}
}

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int i = 0;
	int ret = 0;
	ret = num;

	for(i = 0;i < ret;i ++) //循环控制打印的行数
	{
		tran(num);//递归控制打印的列数
		printf("\n");//换行放循环里面处理
		num --;//初始值num放循环里面控制
	}

	return 0;
}

