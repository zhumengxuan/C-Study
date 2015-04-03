#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100] = {'\0'};
	int i = 0;//计数变量
	int num = 0; //数字
	int lower = 0;//小写字母
	int upper = 0;//大写字母
	int spc = 0;//空格

	printf("pls input a string:\n");
	scanf("%[^\n]", str);

	while (str[i] != '\0')
	{
		if (isdigit(str[i])) //是数字
		{
			num ++;	
		}
		else if (islower(str[i])) //是小写
		{
			lower ++;
		}
		else if (isupper(str[i])) //是大写
		{
			upper ++;
		}
		else if (isspace(str[i])) //是空格
		{
			spc ++;
		}
		i ++;
	}

	printf("num = %d\n",num);
	printf("lower = %d\n",lower);
	printf("upper = %d\n",upper);
	printf("spc = %d\n",spc);

	return 0;
}

