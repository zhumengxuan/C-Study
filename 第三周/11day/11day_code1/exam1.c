#include <stdio.h>
#include <string.h>
//struct 结构体名{结构体成员}
//自定义一个数据类型,名称为student结构体
//只是声明一个数据类型时,不包含任何内存空间

struct time
{
	int hour;
	int min;
	int sec;
};

struct book
{
	char name[10];
	float price;
	char author[10];
	char publish[10];
};

int main(void)
{
	//通过已经定义的结构体类型来声明变量
	//  数据类型   变量名
	struct time china_time;
	china_time.hour = 8;
	china_time.min = 40;
	china_time.sec = 30;

	struct book book1;
	strcpy(book1.name, "math");
	book1.price = 20;
	strcpy(book1.author, "lishi");
	strcpy(book1.publish, "xinhua");

	printf("china_time.hour=%d\n",china_time.hour);
	printf("china_time.min=%d\n",china_time.min);
	printf("china_time.sec=%d\n",china_time.sec);
	printf("\n");	
	printf("book1.name=%s\n",book1.name);
	printf("book1.price=%f\n",book1.price);
	printf("book1.author=%s\n",book1.author);
	printf("book1.publish=%s\n",book1.publish);
	printf("\n");	
		
	return 0;
}

