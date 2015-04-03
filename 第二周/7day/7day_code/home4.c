#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int max = 1; //用于记录最多次//一旦出现，最少为1次
	char ch_max = '\0';//用于保存出现最多次的元素

	char ch[] = "aabbbbccbc";
	int len = sizeof(ch)/sizeof(ch[0]);

	for(i = 0;ch[i] != '\0';i ++)
	{
		count = 1; //一旦出现某个字符，肯定就有1个了
		for(j = i + 1;ch[j] != '\0';j ++)
		{
			if(ch[i] == ch[j])
			{
				count ++;
			}
		}

		if(count > max)
		{
			max = count;
			ch_max = ch[i];
		}
	}

	printf("出现最多次数的元素是:%c\n",ch_max);
	printf("一共出现了%d次.\n",max);

	return 0;
}

