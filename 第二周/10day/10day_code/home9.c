#include <stdio.h>
#include <string.h>

//cbcbc算一次的情况
int searchTimesInString_1(const char *str,char *substr)
{
	int i = 0;
	int count = 0;
	int len1 = strlen(str);
	int len2 = strlen(substr);
	const char *h = str;
	char *p = NULL;

	for(i = 0;i < len1 - len2;i ++)
	{
		p = strstr(h,substr);
		if(p != NULL)
		{
			count ++;
			h = p + len2;
		}
		else
			break;
	}
	return count;
}

//cbc算两次的情况
int searchTimesInString_2(const char *str,char *substr)
{
	int i = 0;
	int count = 0;
	int len1 = strlen(str);
	int len2 = strlen(substr);
	const char *h = str;
	char *p = NULL;

	for(i = 0;i < len1 - len2;i ++)
	{
		p = strstr(h,substr);
		if(p != NULL)
		{
			count ++;
			h = p + 1;
		}
		else
			break;
	}
	return count;
}

int main(void)
{
	int count = 0;
	char str[] = "cbcabcbcbcacbc"; 
	char *substr = "cbc";

	count = searchTimesInString_1(str,substr);
	printf("cbcbc算一次的情况:count = %d\n",count);

	count = searchTimesInString_2(str,substr);
	printf("cbcbc算两次的情况:count = %d\n",count);

	return 0;
}

