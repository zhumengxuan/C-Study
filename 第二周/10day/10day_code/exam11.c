#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_nam[30] = {'\0'};
	char second_nam[20] = {'\0'};

	printf("pls input the first_name:\n");
	scanf("%s",first_nam);
	printf("pls input the second_nam:\n");
	scanf("%s",second_nam);

	printf("The full_name is:\n");
	printf("%s\n",strcat(first_nam,second_nam));

	return 0;
}

