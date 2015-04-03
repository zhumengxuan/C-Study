#include <stdio.h>

int main(void)
{
	int score = 0;
	scanf("%d",&score);
	score >= 90 ? printf("A\n"):score >= 60 ? printf("B\n"):printf("C\n");
	return 0;
}
