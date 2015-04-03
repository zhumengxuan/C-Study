#include <stdio.h>
#include <string.h>

int main(void)
{
	int ret = 0; //返回值
	int ret1 = 0;

	char username[20] = {"zhaobenshan"};
	char password[20] = {"123456"};
	char myusername[20] = {'\0'};
	char mypassword[20] = {'\0'};

	while(1)
	{
		printf("请输入你的用户名:\n");
		scanf("%[^\n]",myusername);
		getchar();

		ret = strcmp(username,myusername);
		if(ret == 0)
		{
			printf("用户名输入正确!\n");
			break;
		}
		else
		{
			printf("用户名输入错误!登陆失败!\n");
			continue;
		}
	}

	while(1)
	{
		printf("请输入你的密码:\n");
		scanf("%[^\n]",mypassword);
		getchar();

		ret1 = strcmp(password,mypassword);
		if(ret1 == 0)
		{
			printf("密码输入正确!登陆成功!\n");
			break;//用户名和密码都输入正确则退出
		}
		else
		{
			printf("密码输入错误!登陆失败!\n");
			continue;
		}
	}

	return 0;
}

