#include <stdio.h>

struct person
{
	int id;
	char name[10];
	//结构体嵌套
	//告诉编译器,该结构体以后会确定该结构体
	//是那一个结构体
	struct wallet *wal;
	//可以包含和自己类型相同的结构体指针
	struct person *per;
};

struct wallet
{
	int cards;
	int money;
};

int main(void)
{
	struct person p;
	struct wallet w;
	struct person p2;
	
	p.wal = &w;
	p.per = &p2; //struct person *per;
	//p.wal.money = 1000;
	//p.wal.money -= 1000;

	return 0;
}

