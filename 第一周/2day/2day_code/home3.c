#include <stdio.h>

int main(void)
{
	char ch1 = '\0';
	char ch2 = '\0';
	char ch3 = '\0';
	char ch4 = '\0';

	printf("请输入4个密码字符:\n");
	scanf("%c%c%c%c",&ch1,&ch2,&ch3,&ch4);

	if(ch1 >= 'a'&&ch1 <= 'h')
		ch1 = ch1 + 18;
	else if(ch1 >= 'i'&&ch1 <= 'z')
		ch1 = ch1 + 18 - 26;

	if(ch2 >= 'a'&&ch2 <= 't')
		ch2 = ch2 + 6;
	else if(ch2 >= 'u'&&ch2 <= 'z')
		ch2 = ch2 + 6 - 26;

	if(ch3 >= 'a'&&ch3 <= 't')
		ch3 = ch3 + 6;
	else if(ch3 >= 'u'&&ch3 <= 'z')
		ch3 = ch3 + 6 - 26;
	
	if(ch4 >= 'a'&&ch4 <= 'j')
		ch4 = ch4 + 16;
	else if(ch4 >= 'k'&&ch4 <= 'z')
		ch4 = ch4 + 16 - 26;
	
	printf("%c%c%c%c\n",ch1,ch2,ch3,ch4);

	return 0;
}

