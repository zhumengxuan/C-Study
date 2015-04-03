#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "hello world!";
	char str1[20] = {'\0'};

	strcpy(str1,str);

	printf("数组str1[20]中的内容为:\n");
	printf("%s\n",str1);

	return 0;
}

