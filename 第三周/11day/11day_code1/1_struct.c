#include <stdio.h>
//struct 结构体名{结构体成员}
//自定义一个数据类型,名称为student结构体
//只是声明一个数据类型时,不包含任何内存空间

struct time
{
	int hour;
	int min;
	int sec;
};


struct book
{
	char name[10];
	float price;
	char author[10];
	char publish[10];
};

int main(void)
{
	//通过已经定义的结构体类型来声明变量
	//  数据类型   变量名
	struct student stu1;
	//数据类型为  struct student
	//变量名为	  stu1
	struct student stu2;
	struct student stu3;
	struct student stu4;

	return 0;
}

