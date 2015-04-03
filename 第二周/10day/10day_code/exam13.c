#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	char str[10] = "12:59:59";
    char *p = NULL;

	p = strtok(str, ":");
	if (p != NULL)
	{
		hour = atoi(p);
		p = strtok(NULL, ":");
		if (p != NULL)
		{
			min = atoi(p);
		}
		p = strtok(NULL, ":");
		if (p != NULL)
		{
			sec = atoi(p);
		}
		//if sec + 1 == 60   sec = 0
		//   min + 1   if min + 1 == 60  min = 0
		//   hour + 1
		printf("hour:%d\n",hour);
		printf("min:%d\n",min);
		printf("sec:%d\n",sec);
	}

	return 0;
}

