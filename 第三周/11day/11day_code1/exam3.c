#include <stdio.h>

typedef struct book
{
	int num;
	char name[10];
	float price;
}book;

int main(void)
{
	int i = 0;
	book book[2];

	for(i = 0;i < 2;i ++)
	{
		printf("pls input the message of book[%d]:\n",i);
		scanf("%d %[^\n] %f",&book[i].num,book[i].name,&book[i].price);
	}

	for(i = 0;i < 2;i ++)
	{
		printf("%d %s %.2f",book[i].num,book[i].name,book[i].price);
		printf("\n");	
	}

	return 0;
}

