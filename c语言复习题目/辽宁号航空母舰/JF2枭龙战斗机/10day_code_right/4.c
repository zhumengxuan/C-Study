#include <stdio.h>

int main(void)
{
	char c = 0;
	int arr[4] = {0};

	while(1)
	{
		scanf("%c", &c);
		if(c == '\n')
			break;
		if((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
			arr[0] ++;//arr[0]表示字母
		else if(c == ' ')
			arr[1] ++;//arr[1]表示空格
		else if(c >= '0' && c <= '9')
			arr[2] ++;//arr[2]表示数字
		else
			arr[3] ++;//arr[3]表示其他
	}

	printf("英文个数为：%d\n\
空格个数为: %d\n\
数字个数为：%d\n\
其他字符个数为：%d\n",arr[0],arr[1],arr[2],arr[3]);
			
  return 0;
}

