#include <stdio.h>
//x+y=z
//x=1,y=2
//x=3,y=4

int main(void)
{
	int wallet;
	//赋值操作
	//将常量10保存到wallet变量中
	wallet = 10;
	wallet = 20;

	float fvar;
	fvar = 3.14159;
	fvar = 314159e-5;

	char ch;
	//系统最后会转换为对应的ascii码
	ch = 'a';
	//保存的是对应的字符ascii码
	printf("%c\n", ch);
	printf("%d\n", ch);
	
	ch = 97;
	printf("%c\n", ch);
	printf("%d\n", ch);

	//要属用print函数输出数据
	//逗号左边:要输出的内容
	//逗号右边:告诉printf函数要输出的变量
	//根据逗号左边的方式,将右边的变量输出
	printf("%d\n",  wallet);
	printf("%f\n", fvar);
	//int var;
	//float fvar;
	//char ch;
	return 0;
}

