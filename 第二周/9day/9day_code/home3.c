#include <stdio.h>
#include <string.h> //使用了strlen函数和strstr函数

int substr_count(char *str,
		char *substr,int len1,int len2)
{
	int i = 0;
	int count = 0; //用于子字符串个数的计数
	char *p = NULL; //用于strstr函数的返回值
	char *h = NULL;//这里需要一个中间指针
	h = str;//指向母字符串的起始地址

	for(i = 0;i <= len1 - len2;i ++)	
	{
		if((p = strstr(h,substr)))
		{
			count ++; //子字符串计数
			h = p;//备份
			h = h + 1;//把返回值的下一个地址编变成起始地址
		}
	}
	return count; //返回次数
}

int main(void)
{
	int times = 0; //表示子串出现的次数
	char str[100] = "abcbcabcedfabc";
	char *substr = "abc";
	int len1 = strlen(str);
	int len2 = strlen(substr);

	times = substr_count(str,substr,len1,len2);
	printf("子串%s出现了%d次!\n",substr,times);

	return 0;
}

