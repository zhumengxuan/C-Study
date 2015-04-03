#include <stdio.h>

struct score
{
	int Chinese;
	int Maths;
	int English;
};

typedef struct student
{
	int num;
	char name[10];
	char sex;
	char adder[20];
	struct score score;
}student;

int main(void)
{
	student student[2];
	printf("pls input num of student[0]:\n");
	scanf("%d",&student[0].num);
	printf("pls input name of student[0]:\n");
	scanf("%s",student[0].name);
	printf("pls input sex of student[0]:\n");
	scanf("%c",&student[0].sex);
	getchar();
	printf("pls input score of student[0]:\n");
	scanf("%d %d %d",&student[0].score.Chinese,&student[0].score.Maths,&student[0].score.English);

	printf("pls input num of student[1]:\n");
	scanf("%d",&student[1].num);
	printf("pls input name of student[1]:\n");
	scanf("%s",student[1].name);
	printf("pls input sex of student[1]:\n");
	scanf("%c",&student[1].sex);
	getchar();
	printf("pls input score of student[1]:\n");
	scanf("%d %d %d",&student[1].score.Chinese,&student[1].score.Maths,&student[1].score.English);

	return 0;
}

