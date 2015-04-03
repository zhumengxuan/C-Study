#include <stdio.h>

int count_word(char *s)
{
	int i = 0;
	int count = 0;
	//while (s[i] != '\0')
	while (*(s+i) != '\0')
	{
		count ++;
		i++;
	}
	return count;
}

void big_to_lower(char *s, int len)
{
	int i = 0;
	for (i = 0; i < len; i ++)
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
		{
			*(s + i) += 32;
		}
	}
}

int main(void)
{
	char str[100] = {};
	printf("pls input a string:\n");
	scanf("%[^\n]", str);

	//获取字符数组有效字符数
	int len = count_word(str);
	printf("len = %d\n", len);

	//将指定字符数组中的所有大写转为小写
	big_to_lower(str, len);
	//big_to_lower(&str[0], len);
	printf("Now the string is:\n%s\n", str);
	
	return 0;
}

