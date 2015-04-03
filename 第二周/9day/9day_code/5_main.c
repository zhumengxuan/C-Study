#include <stdio.h>
//argc 数组元素个数
//argv 参数字符串
int main(int argc, char *argv[])
{
	//char s[10] = "hello world";
	//argv[0] = s;
	//argv[0] 程序名
	//argv[1] 真正的启动参数
	int i = 0;
	for (i = 0; i < argc;i ++)
	{
		//输出所有的启动参数
		printf("%s\n", argv[i]);	
	}
	//char str[10] = "hello";
	//scanf("%s", str);
	//printf("%s", str);

	return 0;
}

