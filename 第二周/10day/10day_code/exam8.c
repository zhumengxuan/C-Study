//这是对的代码
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int len = 0;
	char *h = NULL;
	char *p = NULL;
	char *str = "abcdfhjskfhabcaabc";
	char *arr = "abc";
	len = strlen(str);
	h = str; //建立联系
	
	printf("偏移法预定地址last_p = %p\n",str + 15);
	printf("偏移法预定字符last_ch = %c\n",*(str + 15));

	for(i = 0;i < len;i ++)
	{
		if((p = strstr(h,arr)))	
		{
			h = p;
			h = h + 1;
		}
	}

	h = h - 1;
	printf("使用strstr函数求的地址h = %p\n",h);
	printf("使用strstr函数求的字符*h = %c\n",*h);

	return 0;
}

/*
//下面的写法会报段错误，和上面的代码对比学习
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int len = 0;
	char *h = NULL;
//	char *p = NULL;
	char *str = "abcdfhjskfhabcaabc";
	char *arr = "abc";
	len = strlen(str);
	h = str;
	
	printf("偏移法预定地址last_p = %p\n",str + 15);
	printf("偏移法预定字符last_ch = %c\n",*(str + 15));
	
	for(i = 0;i < len;i ++)
	{
		if((h = strstr(h,arr)))	
		{
			//h = p; //假设这一句先不要，注释掉
			//如果这样写，报段错误
			//原因在于假设某一次为 h为NULL，则
			//接下来的h为NULL,这是个非法地址!
			//strstr的参数为NULL就会报段错误的!
			h = h + 1; //h为NULL时这一句不会执行
		}
	}

	h = h - 1;
	printf("使用strstr函数求的地址h = %p\n",h);
	printf("使用strstr函数求的字符*h = %c\n",*h);

	return 0;
}
*/

