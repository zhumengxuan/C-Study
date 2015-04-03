#include <stdio.h>
#include <string.h>

void printArcherName(const char *str)
{
	int i = 0;
	const char music[100] = "tayongdeshishuangjiegunhenghenghahei";

	printf("歌词来自:\n");
	if(!strcmp(music,str))
		printf("[ar:周杰伦][ti:双节棍][al:范特西]\n");	
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一串歌词:\n");	
	scanf("%[^\n]",str);

	printArcherName(str);

	return 0;
}

