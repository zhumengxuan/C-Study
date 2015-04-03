/*=====================
利用分支结构
if(){}
else if(){}
else if(){}
...
else if(){}
效率比
if(){}
if(){}
if(){}
结构高
======================*/
#include <stdio.h>

int main(void)
{
	char ch = 0;
	printf("pls input the first ch:\n");	
	scanf("%c", &ch);
	getchar();

	if(ch == 'M')
		printf("星期一!\n");
	else if(ch == 'T')
	{
		printf("pls input the second ch:\n");	
		scanf("%c", &ch);
		if(ch == 'u')
			printf("星期二!\n");
		else if(ch == 'h')
			printf("星期四!\n");
	}
	else if(ch == 'W')
		printf("星期三!\n");
	else if(ch == 'F')
		printf("星期五!\n");
	else if(ch == 'S')
	{
		printf("pls input the second ch:\n");	
		scanf("%c", &ch);
		if(ch == 'a')
			printf("星期六!\n");
		else if(ch == 'u')
			printf("星期日!\n");
	}

	return 0;
}

