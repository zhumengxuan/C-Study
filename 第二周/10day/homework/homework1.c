#include <stdio.h>
#include <ctype.h>

int myatoi(char *numstr)
{
	int num = 0;
	int i = 0;
	int flag = 0;

	while(1)
	{
		if(numstr[i] == ' ')
		{
			i ++;
			continue;
		}

		if(numstr[i] == '+' || numstr[i] == '-')
		{
			if(numstr[i] == '-')
			{
				flag = 1;
			}
			i ++;
			break;			
		}
		else
			break;

	}


	while(numstr[i] != '\0')
	{
		if(!isdigit(numstr[i]))
			break;

		num = num * 10 + numstr[i] - '0';
		i ++;
	}

	if(flag == 1)
		return -num;
	else
		return num;
}

int main(void)
{
	char numstr[20] = {'\0'};
	int num = 0;

	printf("请输入字符串:\n");
	scanf("%[^\n]",numstr);

	num = myatoi(numstr);
	printf("num = %d\n",num);

	return 0;
}
