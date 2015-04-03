#include <stdio.h>
#include <assert.h>

const char *mystrstr(const char *str,const char *substr)
{
	const char *s1 = NULL;
	const char *s2 = NULL;
	int flag = 0;//1找到一个子字符串的标记,0没找到
		
	assert(str);
	assert(substr);

	while(*str != '\0')//母字符串没结束
	{
		s1 = str;//备份str
		s2 = substr;//备份substr
		while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		//相等且不结束
		{
			s2 ++;//自增
			s1 ++;//自增
		}
		if(*s2 == '\0')//子字符串结束了
		{
			flag = 1;//找到的标记
			break;//退出
		}
		str++;//后挪一个位继续找
	}

	if(flag == 1)
		return str;//返回的是首次出现的地址
	else
		return NULL;
}

int main(void)
{
	const char *p = NULL;
	char str[100] = {};
	printf("pls input a string:\n");
	scanf("%[^\n]",str);
	getchar();

	char substr[10] = {};
	printf("pls input son_string:\n");
	scanf("%[^\n]",substr);

	p = mystrstr(str,substr);
	printf("p=%p\np-str=%ld\n",p,p-str);

	return 0;
}

