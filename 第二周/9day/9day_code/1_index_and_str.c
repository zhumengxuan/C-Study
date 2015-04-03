#include <stdio.h>

void jud(char *s,int len)
{
	int i = 0;
	for(i = 0;i < len;i ++)
	{
		if(*(s+i)>='A'&&*(s+i)<='Z')
			printf("arr[%d] is a big_letter:%c\n",i,*(s+i));
		else if(*(s+i)>='a'&&*(s+i)<='z')
			printf("arr[%d] is a little_letter:%c\n",i,*(s+i));
		else if(*(s+i)>='0'&&*(s+i)<='9')
			printf("arr[%d] is a number:%c\n",i,*(s+i));
		else if(*(s+i)==' ')
			printf("arr[%d] is a space!\n",i);
		else
			printf("arr[%d] is a other_sig:%c\n",i,*(s+i));
	}
}

int main(void)
{
	char arr[] = "HEllo world 123!";
	char *p = arr;

	int len = sizeof(arr)/sizeof(arr[0]);

	//jud(arr,len);
	jud(p,len);

	return 0;
}

