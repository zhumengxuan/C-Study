#include <stdio.h>
/*
a 只不和 x比，即a可以和除了x比
c 不和x,z比，即c可以和y比
剩下的没有约束条件
*/

//注意：本程序忽略了一点就是还有一个基本的约束条件，即a、b、c三人
//只能和x、y、z三人一对一地比，而且只能一个人比一次。
int main(void)
{
	char ch1[] = {'a', 'b', 'c'};
	char ch2[] = {'x', 'y', 'z'};
	int i, j;

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			if(ch1[i] == 'a' && ch2[j] != 'x')
			{
				printf("%c --- > %c\n", ch1[i], ch2[j]);
			}
			else if(ch1[i] == 'c' && ch2[j] != 'x' && ch2[j] != 'z')
			{
				printf("%c --- > %c\n", ch1[i], ch2[j]);
			}
			else if(ch1[i] == 'b')
			{
				printf("%c --- > %c\n", ch1[i], ch2[j]);
			}
		}
	}
	return 0;
}

