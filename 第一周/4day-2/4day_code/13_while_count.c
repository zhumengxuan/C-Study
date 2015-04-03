#include <stdio.h>

int main(void)
{
	char ch = '\0';
	char ch2 = '\0';
	int count = 0;
/*
   //这个程序有bug，这样写不好
	while(ch != 'q')
	{
		printf("pls input a ch:\n");
		scanf("%c",&ch);
		
		if(ch >= 'A'&&ch <= 'Z')
			count++;
	}
	printf("count=%d\n",count);
*/
	/*
	count = 0;
	while(ch != 'q'&&ch2 != 'q')
	{
		printf("pls input a ch:\n");
		scanf("%c",&ch);
		ch2 = getchar();
		
		if(ch >= 'A'&&ch <= 'Z')
			count++;
		if(ch2 >= 'A'&&ch2 <= 'Z')
			count++;
	}
	printf("count=%d\n",count);
*/

	count = 0;
	while(ch != 'q')
	{
	//能达到目的，但是如果要写提示语句的话就有bug，不好
    	//printf("pls input a ch:\n");
		ch = getchar();
		if(ch >= 'A'&&ch <= 'Z')
			count++;
	}
	printf("count1=%d\n",count);

	return 0;
}

