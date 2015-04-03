#include <stdio.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char ch = '\0';
	char name[100][20] = {'\0'};
	char *arr[100] = {NULL};


	for(i = 0;i < 100;i ++)
	{
		arr[i] = name[i]; //一一对应联系
	}

	printf("请输入1--100个学生姓名:\n");
	for(i = 0;i < 100;i ++)
	{
		scanf("%s",name[i]);//%s不接收空格、Tab键、换行符\n等
		count ++;
		ch = getchar();//但是换行符还不是全部字符串输入完毕的符号
		if(ch == '\t')//所以我们选择了Tab键作为全部字符串输入完毕的符号
			break;
	}

	printf("输入的各个学生姓名为:\n");
	for(i = 0;i < count;i ++)
	{
		printf("%s\n",arr[i]);
	}

	return 0;
}

