#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int len = 0;
	
	char arr[] = "hello world!";
	len = strlen(arr);
	printf("待查字符串为:%s\n",arr);

	char ch = '\0';
	printf("请输入一个待查字符:\n");
	scanf("%c",&ch);

	char *p = NULL;
	char *h = NULL;
	h = arr; //建立关系

//	printf("last_lp=%p\nlast_l=%c\n",arr+9,*(arr+9));	
	for(i = 0;i < len;i ++)
	{
		if((p = strchr(h,ch))) //即不为空
		{
			h = p;
			h = h + 1;
		}
		else
			break;
	}
	h = h - 1; //最后一次是向后移了一位的，故退回一步
	printf("h = %p\n",h);
	printf("*h = %c\n",*h);
	//printf("p=%p\n*p=%c\n",p,*p);
	//会发生段错误，因为p最终肯定为NULL,*p无意义了。
	//最后一次肯定是为NULL的。

	return 0;
}

