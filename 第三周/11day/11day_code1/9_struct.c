#include <stdio.h>

struct wallet
{
	int cards;
	int money;
};

struct person
{
	int id;
	char name[10];
	//结构体嵌套
	struct wallet wal;
};

int main(void)
{
	struct person p;
	p.wal.money = 1000;
	p.wal.money -= 1000;
	
	return 0;
}

