#include <stdio.h>
#include <ctype.h>

int myatoi(char *s)
{
	int i = 0;
	int k = 0;
	int flag = 0; //0表示非负数，1表示负数

	while(1)
	{
		if(s[i] == ' ')//如果前面有空格
		{
			i ++;
			continue;//跳过
		}

		if(s[i] == '-' || s[i] == '+') //如果有负号或正号
		{
			if(s[i] == '-')//如果是负号
				flag = 1;//表示负号
			i ++;//则从下一个开始转换
			break;//跳出，以停顿i的值
		}
		else
			break;//不是空格，不是正负号则跳出，进入到转换过程
	}

	while(s[i] != '\0')//未结束
	{

		if(!isdigit(s[i])) //如果是非数字
			break;//直接结束
		
		if(s[i] >= '0' && s[i] <= '9')//如果是数字
		{
			k = k * 10 + s[i] - '0';//转化
		}

		i++; //增量
	}
	
	if(flag == 1) //如果前面是出现过负号的
		return -k;//返回负数
	else
		return k; //否则直接返回正数
}

int main(void)
{
	char s[7] = {'\0'};
	int n = 0;
	printf("pls input a num_string:\n");
	fgets(s,7,stdin);

	n = myatoi(s);
	printf("The data is:\n%d\n",n);

	return 0;
}

