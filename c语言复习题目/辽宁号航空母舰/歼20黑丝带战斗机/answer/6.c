#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is1000phone_mail_string(const char * str)
{
	char substr[] = "@1000phone.com";
	int len = strlen(str);
	int i = 0;
	int count = 0;
//	char *p = &str[len - 14];
	for(i = 0; i < len; i ++)
	{	
		if(isalnum(str[i]) || (str[i] == '_') || (str[i]) == '@')
			count ++;
	}

	if(count == len - 1)
	{
		if(strstr(str,substr) == p)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}


int main(void)
{
	int flag = 0;
	char str[200] = {'\0'};
	printf("请输入一个邮箱地址:\n");
	scanf("%[^\n]",str);

	flag = is1000phone_mail_string(str);
	if(flag)
		printf("是千锋的邮箱\n");
	else
		printf("不是千锋的邮箱\n");

	return 0;
}

