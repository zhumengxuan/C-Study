#include <stdio.h>

int main(void)
{
	//Mon	 Tus	Wed	  Thu	Fri	  Sat	Sun
	char ch = '\0';
	char ch2 = '\0';
	printf("pls input a char:\n");
	scanf("%c",&ch);
	getchar();

	if(ch == 'M')
		printf("Monday\n");
	if(ch == 'T')
	{
		printf("pls input the second char:\n");
		scanf("%c",&ch2);

		if(ch2 == 'u')
			printf("Tuesday\n");

		if(ch2 == 'h')
			printf("Thursday\n");
	}
	if(ch == 'W')
		printf("Wednesday\n");
	if(ch == 'F')
		printf("Friday\n");
	if(ch == 'S')
	{
		printf("pls input the second char:\n");
		scanf("%c",&ch2);
		if(ch2 == 'a')
		printf("Saturday\n");
		if(ch2 == 'u')
		printf("Sunday\n");
	}

	return 0;
}

