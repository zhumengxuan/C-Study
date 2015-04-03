#include <stdio.h>

int main(void)
{
	int i = 0;
	char sex[10] = {'\0'};
	int len = sizeof(sex) / sizeof(sex[0]);

	//用户输入
	for (i = 0; i < len; ++i)
	{
		scanf("%c", &sex[i]);	
		getchar();
	}
	//将大写字母转换为小写字母
	for (i = 0; i < len; ++i)
	{
		if (sex[i] >= 'A' && sex[i] <= 'Z')
		{
			printf("%c", sex[i] + 32);	
		}
		else
		{
			printf("%c", sex[i]);	
		}
	}
	printf("\n");

	return 0;
}

