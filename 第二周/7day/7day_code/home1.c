#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i = 0;
	int word_count = 0;
	int word_length = 0;
	//char arr[] = "hello world welcome to qianfeng";
	int N = 0;
	printf("请输入数组长度N:\n");
	scanf("%d",&N);
	getchar();
	//char arr[N] = {};//这里这样初始化会报错,因为N没确定	
	char arr[N]; //但是不初始化又不行，结果会出错的，不信你试试！

	for(i = 0;i < N;i ++)
		arr[N] = '\0';	//利用循环来初始化为\0

	printf("请输入一个英语句子:\n");
	scanf("%[^\n]",arr);
	printf("英语句子为:\n");
	printf("%s\n",arr);

	i = 0;
	while(arr[i] != '\0')
	{
		//比如:标点符号:逗号，冒号，分号等，前面考虑空格
		//后面考虑了标点符号，即要求必须是字母
		//排除标点符号的办法就是使用字母判断函数isalpha()
		if(arr[i] != ' ' && isalpha(arr[i]))
		{
			word_count++;
			printf("第%d个单词的起始位置是:%p\n",
					word_count,&arr[i]);
			printf("相应字符是:%c\n",arr[i]);
			
			while(arr[i] != ' ' && arr[i] != '\0'&&
					isalpha(arr[i]))
			{
				word_length ++;
				i ++;
			}

			printf("第%d个单词的长度为 = %d\n",
					word_count,word_length);
			i++;

			word_length = 0;
		}
		else
			i++; 
			//如果前面有很多空格或其他非字母字符,那么一直向后挪
	}

	printf("总计单词个数word_count = %d\n",word_count);

	return 0;
}

