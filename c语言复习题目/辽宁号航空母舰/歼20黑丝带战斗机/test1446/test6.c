#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is1000phone_mail_string(const char *str)
{
	int i = 0;
	int count = 0;
	int flag = 1;//表示@前合格
	int flag1 = 0;//表示@后不合格
	int len = strlen(str);	
	char *substr = "@1000phone.com";

	while(str[i] != '@')
	{
		if(!(isalnum(str[i]) || str[i] == '_'))
		{
			flag = 0;
			return 0;//直接退出，后半部分不用再比较
		}
		i ++;
	}

	while(str[i] != '\0')
	{
		if(str[i] == '@')
			break;
		count ++;//用于记录@前有多少字符
		i ++;
	}

	if(strcmp(str + count,substr))
		flag1 = 1;
	else
		flag1 = 0;
	
	if(flag == 1 && flag1 == 1)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个邮箱名:\n");
	scanf("%[^\n]",str);

	int ret = is1000phone_mail_string(str);
	
	if(ret == 1)
		printf("是千锋邮箱!\n");
	else
		printf("不是千锋邮箱!\n");

	return 0;
}

