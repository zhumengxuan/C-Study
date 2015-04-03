#include <stdio.h>

struct student
{
	int id;
	char name[20];
	int age;
	char sex;
	double score;
};
//学生信息管理系统
//1.添加学生信息
//2.修改学生信息
//3.删除学生信息
//4.输出指定学生信息
//5.输出所有学生的信息
//0.退出程序

int main(void)
{
	struct student arr[100];
	int len = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < len;i ++)
	{
		arr[i].id = i + 1;
	}
	
	for(i = 0; i < len;i ++)
		printf("arr[%d].id = %d\n",i,arr[i].id);
	
	return 0;
}

