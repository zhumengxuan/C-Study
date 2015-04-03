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
void input_all_and_output_all(void);

int main(void)
{
	input_all_and_output_all();
	
	return 0;
}

void input(struct student *s)
{	
	int i = 0;
	printf("id, name, age, sex, score:\n");
	scanf("%d", &s->id);
	getchar();

	fgets(s->name, 10, stdin); //用fgets.读行，所以这里一定要以回车结束
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

void input_all_and_output_all(void)
{
	int i = 0;
	struct student stu[3];
	for(i = 0;i < 3;i ++)
		input(stu + i);

	for(i = 0;i < 3;i ++)
		output(stu + i);	
}

