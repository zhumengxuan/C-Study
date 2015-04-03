#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countStringNumber(char *str)
{
	int i = 0;
	int ret = 0;
	char *delim = "+-*/";
	int num[2] = {1,1};
	char *p[3] = {};
	char ch = '\0';

	while(str[i] != '\0')
	{
		if(!isdigit(str[i]))
		{
			ch = str[i]; //求运算符是哪一个？
			break;
		}
		i ++;
	}
	printf("ch = %c\n",ch);
	printf("num[0] = %d\n",num[0]);
	printf("num[1] = %d\n",num[1]);
//15+3
	i = 0;
	p[i] = strtok(str,delim);
	while(p[i] != NULL)
	{
		num[i] = atoi(p[i]);
		printf("num[%d] = %d\n",i,num[i]);
		i++;
		p[i] = strtok(NULL,delim);
	}
	//为什么这里的数组num的值都为0呢？
	printf("num[0] = %d\n",num[0]);
	printf("num[1] = %d\n",num[1]);

	switch(ch)
	{
		case '+':
			ret = num[0] + num[1];
			break;

		case '-':
			ret = num[0] - num[1];
			break;

		case '*':
			ret = num[0] * num[1];
			break;

		case '/':
			if(num[1] == 0)
			{
				printf("分母不能为0!\n");
				return 0; 
			}
			ret = num[0] / num[1];
			break;

		default:
			printf("输入错误!\n");
			break;
	}

	return ret;
}

int main(void)
{
	int ret = 0;
	char arr[10] = {'\0'};
	printf("请输入一个单次运算字符串(如15+3):\n");
	scanf("%[^\n]",arr);

	ret = countStringNumber(arr);
	printf("ret = %d\n",ret);

	return 0;
}

