#include <stdio.h>

void print_name(char (*p)[20],int len)
{
	int i = 0;
	int j = 0;
	
	for(i = 0;i < len;i ++)	
	{
		//在函数内输出了函数外的信息
		printf("%s\n",p[i]);
	}
}

int main(void)
{
	int i = 0;
	int count = 0; //用于记录实际录入的姓名的个数
	char ch = '\0';
	char name[100][20] = {'\0'};
	int len = sizeof(name)/sizeof(name[0]);

	printf("请输入1--100个姓名:\n");
	for(i = 0;i < 100;i ++)
	{
		scanf("%s",name[i]);
		count ++;

		ch = getchar();
		if(ch == '\t')
			break;
	}

	print_name(name,count);
	
	return 0;
}

