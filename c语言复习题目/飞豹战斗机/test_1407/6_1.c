#include <stdio.h>

void maxlen(char *str)
{
	int i = 0;
	int pos = 0;
	int max = 0;
	int index = 0;
	int len = 0;
	
	while(1)
	{
		if(str[i] != ' ')
		{
			len ++;
//			printf("len = %d\n", len);
		}

		if(str[i] == ' ' || str[i] == '\0')
		{
			if(max < len)
			{
				max = len;
				index = pos;
//				printf("max = %d, index = %d\n", max, index);
			}
		}

		if(str[i] == ' ' && str[i + 1] != ' ')
		{
			pos = i + 1;
			len = 0;
//			printf("pos = %d\n", pos);
		}

		if(str[i] == '\0')
			break;

		i ++;
	}

	printf("max = %d, index = %d\n", max, index);
	i = index;//找到最长单词在什么位置了
	while(str[i] != ' ' && str[i] != '\0')
	{
		printf("%c", str[i]);
		i ++;
	}
	printf("\n");

}

int main(void)
{
	char str[100] = {'\0'};
	printf("pls input some strings:\n");
	scanf("%[^\n]", str);

	maxlen(str);

	return 0;
}

