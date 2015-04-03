#include <stdio.h>

struct student
{
	int id;
	char name[10];
	char sex;
	double score;
};

//默认为值传递
//结构体都应该以地址方式传递
void func(struct student *s)
{
	printf("sizeof(s) = %ld\n", sizeof(s));
}


int main(void)
{
	struct student stu;
	func(&stu);

	return 0;
}

