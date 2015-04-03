#include <stdio.h>

int mystrcmp(const char *str1,const char *str2)
{
	int i = 0;
	while(str1[i] != '\0' && str2[i] != '\0')	
	{
		if(str1[i] != str2[i])
			return str1[i] - str2[i];
		i ++;
	}
	return str1[i] - str2[i];
}

int main(void)
{
	int ret = 0;
	char str1[100] = {'\0'};
	char str2[100] = {'\0'};

	printf("请输入字符串str1:\n");
	scanf("%[^\n]",str1);
	getchar();
	printf("请输入字符串str2:\n");
	scanf("%[^\n]",str2);

	ret = mystrcmp(str1,str2);
	printf("ret = %d\n",ret);

	if(ret == 0)
		printf("字符串str1和字符串str2相等!\n");
	else
		printf("字符串str1和字符串str2不相等!\n");

	return 0;
}

