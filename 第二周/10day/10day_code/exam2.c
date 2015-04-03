#include <stdio.h>
#include <string.h>

int main(void)
{
	char str2[10] = "zhangsan";
	char str1[10] = {'\0'};

	strncpy(str1,str2,5);

	printf("数组str1[10]中的内容为:\n");
	printf("%s\n",str1);

	return 0;
}

