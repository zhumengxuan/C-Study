#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "12:59:59";
	int hour;
	int min;
	int sec;

	sscanf(str, "%d:%d:%d",&hour, &min, &sec);
	printf("hour = %d\n", hour);
	printf("min = %d\n", min);
	printf("sec = %d\n", sec);

	return 0;
}

