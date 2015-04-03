#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
	char sex;
	float score;
};

int main(void)
{
	struct student zhangsan;
	struct student *pstudent = &zhangsan;

	zhangsan.id = 1;
	strcpy(zhangsan.name,"zhangsan");
	zhangsan.sex = 'F';
	zhangsan.score = 59.9;

	printf("zhangsan.id = %d\n",pstudent->id);
	printf("zhangsan.name = %s\n",pstudent->name);
	printf("zhangsan.sex = %c\n",pstudent->sex);
	printf("zhangsan.score = %.2f\n",pstudent->score);
	
	return 0;
}

