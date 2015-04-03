#include <stdio.h>
#include <string.h>

void threetoOne(char *dest,const char *s1,
		const char *s2,const char *s3)
{
	strcat(dest,s1);	
	strcat(dest,s2);	
	strcat(dest,s3);	
}

int main(void)
{
	char dest[300] = {'\0'};
	char s1[100] = {'\0'};
	char s2[100] = {'\0'};
	char s3[100] = {'\0'};

	printf("请输入字符串一:\n");
	scanf("%[^\n]",s1);
	getchar();

	printf("请输入字符串二:\n");
	scanf("%[^\n]",s2);
	getchar();
	
	printf("请输入字符串三:\n");
	scanf("%[^\n]",s3);

	threetoOne(dest,s1,s2,s3);
	
	printf("三合一字符串:\n");
	printf("%s\n",dest);

	return 0;
}

