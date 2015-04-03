#include <stdio.h>
#include <string.h>

void func(const char *p,int len)
{
	int i = 0;
	int j = 0;
	int count[100] = {0};//刚开始的时候全部初始化为0	
	char ch = '\0';

	for(i = 0;i < len;i ++)
	{
		ch = p[i];//选定一个字符为参照物
		if(count[i] == 0)//如果为0，表示是第一次记数这个字符
			count[i] = 1; //初始化为1，因为一个字符一旦出现即为1
		else
		{
			count[i] = 0;//不为零说明这个字符曾经计算过，就归零
			continue; //说明这里的这个字符已经计算过一次了，跳过去
		}

		for(j = i + 1;j < len;j ++)
		{
			if(ch == p[j]) //如果在后面发现相同的字符了
			{
				count[i] ++;//参照字符记数增加1
				count[j] ++;//重复出现的字符记数也加1
				//方便滤除已经出现过的字符
				//这样才可能使得count[i]一开始就有可能不为0
			}
		}
	//printf("字符%c出现的次数count[%d]=%d\n",p[i],i,count[i]);
		printf("%c%d",p[i],count[i]);
	}
	printf("\n");
}

int main(void)
{
	char str[100] = {'\0'};
	printf("请输入一个字符串:\n");
	scanf("%[^\n]",str);

	int len = strlen(str);
	func(str,len);

	return 0;
}

