#include <stdio.h>

struct student
{

};
//typedef 数据类型 别名
//define为预处理指令
//typedef为c关键字

//给基本数据类型定义别名为int32
typedef int int32;
//给结构体类型定义别名为stu_t
typedef struct student stu_t;

int main(void)
{
	int var;
	int32 m;
	stu_t s;

	return 0;
}

