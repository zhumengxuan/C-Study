#include <stdio.h>

int main(void)
{
	char ch = '\0';
	char ch1 = '\0';

	printf("请输入一个字符ch:\n");
	scanf("%c",&ch); //接收了A  
	getchar();//吸收一个没用的字符

	printf("请再输入一个字符ch1:\n");
	scanf("%c",&ch1);//接收了回车\n

	printf("ch = %c\n",ch);
	printf("ch1 = %c\n",ch1);

	return 0;
}

