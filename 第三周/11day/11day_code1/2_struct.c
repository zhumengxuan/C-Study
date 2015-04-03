#include <stdio.h>

struct student
{
	int id;
	char name;
	int age;
	char sex;
	double score;
};

int main(void)
{
	//对结构体变量初始化操作
	struct student stu1 = {10, 'a', 18, 'm', 99};

	printf("id = %d\n", stu1.id);
	printf("name = %c\n", stu1.name);
	printf("age = %d\n", stu1.age);
	printf("sex = %c\n", stu1.sex);
	printf("score = %lf\n", stu1.score);

	return 0;
}

