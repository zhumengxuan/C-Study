#include <stdio.h>

int main(void)
{
	char str[10];
	//scanf("%s", str);//从标准输入(键盘)中

	//最多只能接收10个字符
	printf("pls input 10 char:\n");
	//但是最后一个字符会用来保存\0
	fgets(str, 10, stdin);//也就是说除\0外只接收9个字符
	
	puts(str);
//	printf("%s\n", str);
	return 0;
}

