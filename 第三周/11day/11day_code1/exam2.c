#include <stdio.h>
#include <string.h>
//struct 结构体名{结构体成员}
//自定义一个数据类型,名称为student结构体
//只是声明一个数据类型时,不包含任何内存空间

struct book
{
	char name[10];
	float price;
	char author[10];
	char publish[10];
};

int main(void)
{
	struct book book1;
	//通过已经定义的结构体类型来声明变量
	//  数据类型   变量名
	//struct book book1;
	printf("pls input the name of book:\n");
	scanf("%s",book1.name);
	printf("pls input the price of book:\n");
	scanf("%f",&book1.price);
	printf("pls input the author of book:\n");
	scanf("%s",book1.author);
	printf("pls input the publish of book:\n");
	scanf("%s",book1.publish);

	printf("\n");	
	printf("book1.name=%s\n",book1.name);
	printf("book1.price=%f\n",book1.price);
	printf("book1.author=%s\n",book1.author);
	printf("book1.publish=%s\n",book1.publish);
		
	return 0;
}

