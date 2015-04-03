#include <stdio.h>
#include <string.h>

char *find()
{
	int max = 0;
	int len = 0;
	char *index = NULL;

	char str[100] = {};
	printf("pls input a string:\n");
	scanf("%[^\n]",str);

	char *delim = ", ";
	char *p = strtok(str,delim);
	if(p != NULL)
	{
		max = strlen(p);
		index = p;

		while(1)
		{
			p = strtok(NULL,delim);
			if(p != NULL)
			{
				len = strlen(p); 
				if(max < len)
				{
					max = len;
					index = p;
				}	
			}
			if(p == NULL)
				break;
		}
	}
	printf("The max_length_word is:\n");
	printf("%s\n",index);
	
	return index;
}

int main(void)
{
	find();

	return 0;
}

