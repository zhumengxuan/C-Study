#include <stdio.h>
#include <string.h>

int main(void)
{
	//"12:59:59"
	int hour = 12;
	int min  = 59;
	int sec  = 59;
	char arr[100] = {0};
	printf("标准输出端:%d:%d:%d\n", hour, min, sec);
	//按照指定格式将字符串输出到字符数组中
	sprintf(arr,"%d:%d:%d",hour, min, sec);
	printf("数组中: ");
	puts(arr);

	return 0;
}

