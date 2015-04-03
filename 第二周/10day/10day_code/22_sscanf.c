#include <stdio.h>
#include <string.h>

int main(void)
{
	//%[^\n]
	char *str = "zhangsan:12:a:17.5:100";
	char name[100] = {0};
	int level;
	char max;
	float blood;
	int def;
	//%[^:]  正则表达式
	//表示以:号作为读取结束标记
	sscanf(str, "%[^:]:%d:%c:%f:%d", 
				 name, &level, &max, 
				 &blood, &def);

	puts(name);
	printf("level = %d\n", level);
	printf("max = %c\n", max);
	printf("blood = %f\n", blood);
	printf("def = %d\n", def);
	
	return 0;
}

