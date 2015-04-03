#include <stdio.h>

int main(void)
{
	int i = 0;
	int Male = 0;
	int Female = 0;
	char sex[10] = {'\0'};
	int len = sizeof(sex) / sizeof(sex[0]);

	//用户输入
	printf("pls input %d char!!!\n",len);
	for (i = 0; i < len; ++i)
	{
		printf("pls input %dth M,m&F,f:\n",i+1);
		scanf("%c", &sex[i]);	
		getchar();
	}
	//统计用户输入的大小写个数
	for (i = 0; i < len; ++i)
	{
		if(sex[i] == 'm'||sex[i] =='M')
		{
			Male++;
		}
		else if(sex[i] == 'f'||sex[i] == 'F')
		{
			Female++;
		}
	}

	printf("Male:%d\n", Male);
	printf("Female:%d\n", Female);
	
	return 0;
}

