#include <stdio.h>

struct student
{
	int id;
	struct wallet *wal;
};

struct wallet
{
	int money;
};

int main(void)
{
	//当结构体变量为指针的时候
	//使用->访问成员
	//相反使用.访问成员
	struct student stu;
	struct student *p = &stu;
	//(*p) == stu
	stu.id = 10;
	//(*p).id = 99;
	//获取p所指向的结构体的id成员
	//先对p进行解引用
	//再取成员
	p->id = 100;
	printf("(*p).id = %d\n", (*p).id);
	printf("p->id = %d\n", p->id);
	printf("stu.id = %d\n", stu.id);

	return 0;
}

