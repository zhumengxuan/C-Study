#include <stdio.h>

int main(void)
{
	char i,j,k; //定义假设的对象,假设i是a的码子，j是b的码子，k是c的码子

	for(i='x';i<='z';i++)
		for(j='x';j<='z';j++)
		{
			if(i != j) //找到的对象不能是同一个人
			{
				for(k='x';k<='z';k++)
				{
					if(k != i&&k != j) //找到的对象不能和别人的对象冲突
					{
						if(i != 'x'&&k != 'x'&&k != 'z')//i看不上x，k看不上x和z
							printf("order is: a--%c\tb--%c\tc--%c\n",i,j,k);
					}
				}
			}
		}

	return 0;
}

