#include <stdio.h>

//0 1 2
enum size
{
	S, //Small
   	M, //Middle
   	L  //Large
};
		//0 1 2
enum color
{
	red, 
	black, 
	blue
};
//red = 0
//black = 1
//blue = 2

int main(void)
{
	enum color c = red;
//	backgroundcolor(red);
	switch(c)
	{
		//注意：如果枚举中的类型在case中没有全部列举出来的话会报警告的！
		case red:  
			printf("red!\n");
			break;
		case black:
			printf("black!\n");
			break;
		case blue:
			printf("blue!\n");
			break;
	}

	//声明一个枚举变量
	enum size s = L;
	s = M;
	switch(s)
	{
		case S:
			printf("S!\n");
			break;
		case M:
			printf("M!\n");
			break;
		case L:
			printf("L!\n");
			break;
	}

	return 0;
}

