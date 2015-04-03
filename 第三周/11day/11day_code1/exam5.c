#include <stdio.h>

struct student
{
	int id;
	char name[10];
	int age;
	char sex;
	double score;
};

void input(struct student *s);
void output(struct student *s);

int main(void)
{
	struct student stu;
	input(&stu);
	output(&stu);

	return 0;
}

void input(struct student *s)
{	
	printf("id, name, age, sex, score:\n");
	scanf("%d", &s->id);
	getchar();

	fgets(s->name, 10, stdin); //用fgets
	scanf("%d", &s->age);
	getchar();
	
	scanf("%c", &s->sex);
	//getchar(); 为什么这里可以不要？
	scanf("%lf", &s->score);
}

void output(struct student *s)
{
	printf("id = %d, name = %s, age = %d, sex = %c, score = %lf\n", s->id, s->name, s->age, s->sex, s->score);
}

