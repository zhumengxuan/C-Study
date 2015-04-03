#include <stdio.h>

int is_alpha(char ch) //判断字母
{
	if((ch >= 'a' && ch <= 'z')
	 || (ch >= 'A' && ch <= 'Z'))
	 	return 1;
	else
		return 0;
}

int is_digit(char ch) //判断数字
{
	if(ch >= '0' && ch <= '9')	
		return 1;
	else
		return 0;
}

int is_other_sig(char ch)//判断其他字符作为字符串间的分隔符
{
	if((ch < '0' || ch > '9') && (ch < 'A' 
		|| ch > 'Z') && (ch < 'a' || ch > 'z'))
		return 1;
	else 
		return 0;
}

int main(void)
{
	char str[100] = {};
	int counter = 0;
	int i = 0;
	
	printf("pls input some strings:\n");
	scanf("%[^\n]", str);
	
	while(str[i] != '\0')
	{
		if((is_alpha(str[i]) || is_digit(str[i]))
			&& is_other_sig(str[i + 1]))
		{
			counter ++;
		}
		i ++;
	}
	printf("There are %d strings!\n", counter);

	return 0;
}

