#include <stdio.h>

int main(void)
{
	char grade = '\0';
	printf("pls input a grade:\n");
	scanf("%c", &grade);

	switch(grade)
	{
		case 'A':
			printf("90~100\n");
			break;

		case 'B':
			printf("80~89\n");
			break;

		case 'C':
			printf("70~79\n");
			break;

		case 'D':
			printf("60~69\n");
			break;

		default:
			printf("没有该等级的范围\n");
	}

	return 0;
}

