#include <stdio.h>

int main(void)
{
	char str[100] = {};
	int i = 0;
	int counter = 0;
	int max = 0;
	int index = 0;
	int pos = 0;

	printf("pls input some strings:\n");
	scanf("%[^\n]", str);

	while(1)
	{
		if(str[i] != ' ')
		{
			counter ++;
//			printf("counter = %d\n", counter);
		}

		if(str[i] == ' ' || str[i] == '\0')
		{
			if(max < counter)
			{
				max = counter;
				index = pos;
//				printf("max = %d, index = %d\n", max, index);
			}
		}

		if(str[i] == ' ' && str[i + 1] != ' ')
		{
			pos = i + 1;
			counter = 0;
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

	return 0;
}

