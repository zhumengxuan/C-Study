#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int count = 0;
	char str[100];
	char *delim = " ";
	printf("pls input a string:\n");
	scanf("%[^\n]",str);

	printf("The old_string is:\n");
	printf("%s\n",str);

	char *arr[20] = {NULL};
	arr[0] = strtok(str,delim);
	if(arr != NULL)
	{
		while(*(arr+i) != NULL)
		{
			i ++;
			count++;
			*(arr+i) = strtok(NULL,delim);
		}
	}
	
	printf("The new_string is:\n");
	for(i = count-1;i >= 0;i --)
	{
		printf("%s ",*(arr+i));
	}
	printf("\n");

	return 0;
}

