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
	//声明的同时初始化
	struct student stu1 = {10, "zhangsan"};
//	strcpy(stu1.name, "zhangsan");
	printf("stu1.name is:%s\n",stu1.name);
	//离开声明后,不能对数组整体赋值
	//必须要进行拷贝操作
	//stu1.name = "zhangsan";
	return 0;
}

