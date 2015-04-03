#include <stdio.h>
//18  24?
struct student
{
	int id; //4
	char name;//1
	char sex;//1
	double score;//8
};

int main(void)
{
//	struct student stu1;
	int size = sizeof(struct student);
	printf("size = %d\n", size);

	return 0;
}

