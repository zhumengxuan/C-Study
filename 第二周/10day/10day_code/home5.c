#include <stdio.h>
#include <ctype.h>

int myatoi(const char *s)
{
	int i = 0;
	int k = 0;

	while(1)
	{
		if(s[i] == ' ')	
			i ++;
		else
			break;
	}

	if(s[i] == '-'|| s[i] == '+')
		i += 1;

	//1234
	while(isdigit(s[i]))
	{
		k = k * 10 + s[i] - '0';
		i ++;	
	}

	if(s[0] == '-')
		return -k;
	else
		return k;
}

int main(void)
{
	char arr[20] = {'\0'};
	printf("请输入一个数字字符串:\n");
	scanf("%[^\n]",arr);

	int num = myatoi(arr);
	printf("num = %d\n",num);

	return 0;
}

