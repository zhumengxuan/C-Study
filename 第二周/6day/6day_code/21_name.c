#include <stdio.h>

int main(void)
{
	//"zhangsan"
	//字符串结束符 '\0'   0 nul
	char name2[] = "zhangsan";

	char name[] = {'z', 'h', 'a', 
				    'n', 'g', 's', 
					'a', 'n', '\0'};

	int len1 = sizeof(name) / sizeof(name[0]);
	int len2 = sizeof(name2) / sizeof(name2[0]);
	
	printf("len1:%d\n", len1);
	printf("len2:%d\n", len2);

	return 0;
}

