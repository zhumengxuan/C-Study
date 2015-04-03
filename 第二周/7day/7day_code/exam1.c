#include <stdio.h>

int main(void)
{
	int len = 0;
	int i = 0;
	int min = 0;
	int pos = 0;
	int count = 0;
	int age[50] = {0};
	char ch = '\0';	

	len = sizeof(age)/sizeof(age[0]);

	for(i = 0;i < len;i ++)
	{
		scanf("%d",&age[i]);
		count ++;

		ch = getchar();
		if(ch == '\n')
			break;
	}

	//注意：这个要在输入各个数字后进行
	min = age[0]; 
	pos = 0;
	
	for(i = 0;i < count;i ++)
	{
		if(min > age[i])
		{
			min = age[i];	
			pos = i;
		}
	}

	printf("pos = %d\n",pos);
	printf("min = %d\n",min);

	return 0;
}

