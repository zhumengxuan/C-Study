#include <stdio.h>

int main(void)
{
	char ch = 0;
	int score = 0;
	scanf("%d", &score);

	//三目运算符的嵌套使用
	ch = (score >= 90) ? 'A' : (score >= 60) ? 'B' : 'C';
	printf("%c\n", ch);

	return 0;
}

