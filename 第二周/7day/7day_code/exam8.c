#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int j = 0;
	char temp = '\0';  //int temp;也行，认真体会
	char arr[] = "helloworld!";
	int len = sizeof(arr)/sizeof(arr[0]);

	//printf("len = %d\n",len);	
	//printf("The array is:\n");
	//printf("%s\n",arr);
	printf("排序前的数组为:\n");
	for(i = 0;i < len;i ++)
		printf("%c",arr[i]);
	printf("\n");
	//len = strlen(arr); 
    //'\0'是一个不可显示字符，参不参与排序效果一样
	/*
	for(i = 0;i < len - 1;i ++)
	{
		for(j = i + 1;j < len;j ++)  
		//如果把j < len换成i < len
		//体验一下段错误的成因
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				//每轮交换多次。但是效率不高
				arr[j] = temp;
			}
		}
	}
	*/	

	int min = 0;
	for(i = 0;i < len-1;i ++)
	{
		min = i;
		for(j = i + 1;j < len;j ++)
		{
			if(arr[min] > arr[j])
			//if(arr[i]>arr[j]) 
			//注意这里，为什么不写成arr[i] > arr[j]呢？
			{
				min = j;
			}
		}

		if(min != i)
		{
			temp = arr[min];
			arr[min] = arr[i]; //每一轮只交换一次
			arr[i] = temp;
		}
	}

	printf("排序后的数组为:\n");
	for(i = 0;i < len;i ++)
		printf("%c",arr[i]);
	printf("\n");

	return 0;
}

