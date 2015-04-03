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
	//对结构体变量赋值
	struct student stu1;
	struct student stu2;
	struct student stu3;
	//结构体变量.结构体成员
	//访问结构体成员,并且赋值
	stu1.id = 10;
	stu1.name = 'a';
	stu1.age = 18;
	stu1.sex = 'm';
	stu1.score = 59.9;
	
//	scanf("%d", &stu1.id);

	printf("id = %d\n", stu1.id);
	printf("name = %c\n", stu1.name);
	printf("age = %d\n", stu1.age);
	printf("sex = %c\n", stu1.sex);
	printf("score = %lf\n", stu1.score);

	return 0;
}

