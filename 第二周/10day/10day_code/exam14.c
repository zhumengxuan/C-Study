#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[100] = "I come from china,I am a chinese!";
	char *delim = " !:;,.";
	char *p = NULL;
	char *p_max = NULL;
	int max = 0;
	int count = 0;

	p = strtok(arr,delim);
	if(p != NULL)
	{
		count = strlen(p);
		if(max < count)
		{
			max = count;
			p_max = p;
		}

		while(1)
		{
			p = strtok(NULL,delim);
			if(p != NULL)
			{
				count = strlen(p);
				if(max < count)
				{
					max = count;
					p_max = p;
				}
			}
			else
				break;
		}

		printf("max_length is:%d\n",max);
		printf("max_long_word is:%s\n",p_max);
	}

	return 0;
}

