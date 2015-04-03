#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[50] = {'\0'};
	int num = 0;
	int word = 0;
	int spc = 0;
	int oth = 0;
	int i = 0;

	printf("请输入一段字符串:\n");
	scanf("%[^\n]",str);

	while(str[i] != '\0')
	{
		if(isdigit(str[i]))
			num ++;
		else if(isalpha(str[i]))
			word ++;
		else if(str[i] == ' ')
			spc ++;
		else
			oth ++;
		i ++;	
	}	

	printf("num = %d\n",num);
	printf("word = %d\n",word);
	printf("spc = %d\n",spc);
	printf("oth = %d\n",oth);

	return 0;
}
