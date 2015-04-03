#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int j = 0;
	char str[20] = {'\0'};
    printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);
	int len = strlen(str);	
	char arr[len + 1][2 * len - 1];

	for(i = 0; i < (len+1)*(2*len - 1); i ++)
	{
		arr[0][i] = ' ';
	}

	for(i = 0; i < len; i ++)
	{
		for(j = 0; j < 2*len - 1; j ++)
		{
			if(i + j == len - 1)
				arr[i][j] = *(str + i);
			
			if(j - i == len - 1)
				arr[i][j] = *(str + i);
		}
	}
	
	for(i = 1; i < len + 1; i ++)
	{
		for(j = 0; j < 2*len -1; j ++)
		{
			if(i + j == len)
				arr[i][j] = *(str + (i-1));
			
			if(j - i == len - 2)
				arr[i][j] = *(str + (i - 1));
	
		}
	}

	for(i = 0; i < len+ 1; i ++)
	{
		for(j = 0; j < 2*len -1; j ++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
