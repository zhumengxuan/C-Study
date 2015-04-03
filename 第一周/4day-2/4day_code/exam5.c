#include <stdio.h>

int main(void)
{
	int data = 0;
	int letters = 0;
	int other = 0;
	int space = 0;
	char ch = 'y';
	char c = '\0';
	
	while(ch != 'q')
	{
		data = 0;
		letters = 0;
		other = 0;
		space = 0;
		printf("pls intput a string:\n");	
		while((c = getchar())!='\n')
			{
				if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))	
					letters++;
				else if(c==' ')
					space++;
				else if(c>='0'&&c<='9')	
					data++;
				else 
					other++;			
			}
			printf("letters:%d\nspace:%d\ndata:%d\nother:%d\n",
					letters,space,data,other);
			printf("continue or not?(q&oth)\n");
			ch = getchar();
	}

	return 0;
}

