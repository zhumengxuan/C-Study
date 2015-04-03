#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is1000phone_mail_string(const char *str)
{
	char *p = "@1000phone.com";
	int i =  0;


	while(str[i] != '@' && str[i] != '\0')
	{
		if(!(isalnum(str[i]) || str[i] == '_'))
		{
			return 0;
		}	
	
		i ++;
	}

	if(strcmp(str + i,p) == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str[50] = {'\0'};
	printf("请输入一个用户名:\n");
	scanf("%[^\n]",str);

	int ret = is1000phone_mail_string(str);
	if(ret == 1)
		printf("是千锋邮箱\n");
	else if(ret == 0)
		printf("不是千锋邮箱;\n");

	return 0;
}
