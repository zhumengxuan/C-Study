#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[10];
	int age;
	char sex;
	double score;
};

int main(void)
{
	struct student s;
	struct student *stu = &s;

	stu->id = 10;
	strcpy(stu->name, "zhangsan");
	stu->sex = 'm';

	printf("id = %d, name = %s, sex = %c\n",
			stu->id, stu->name, stu->sex);

	return 0;
}

