#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("pls input a score:\n");
	scanf("%d",&score);

	if(score < 60)
		printf("不及格！\n");

	if(score >= 60)
		printf("及格！\n");

	return 0;
}

