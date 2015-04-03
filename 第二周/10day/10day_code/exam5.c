#include <stdio.h>
#include <string.h>
/*
//不完善的写法
char *mystrchr(char *s,char c,int len)
{
	int i = 0;
	for(i = 0;i < len;i ++)	
	{
		if(*(s + i) == c)
			break;
	}
	return s + i;//注意：这样写是不完善的，假设没有找到呢？
}
*/

/*这是一种正确写法,但是仍然不太好
char *mystrchr(char *s,char c,int len)
{
	int i = 0;
	for(i = 0;i < len;i ++)	
	{
		if(*(s + i) == c)
			return s + i;//找到的情况
	}
	return NULL;//没有找到的情况
}
*/

//下面是另一种比较好的写法
char *mystrchr(char *s,char c,int len)
{
	int i = 0;
	char *p = NULL;
	for(i = 0;i < len;i ++)	
	{
		if(*(s + i) == c)
		{
			p = s + i;//找到的情况
			break; //退出
		}
	}
	return p;//没有找到和找到的情况都是返回p；
	//可能是NULL或s+i
}

int main(void)
{
	char arr[] = "hello world!";
	char *p = NULL;
	int len = 0;
	char c = 'l';
	len = strlen(arr);

	p = mystrchr(arr,c,len);
	printf("字符%c第一次出现的地址为:%p\n",*p,p);

	return 0;
}

