#include <stdio.h>

void func(int arr[])
{
	printf("length_arr=%lu\n",sizeof(arr));
}

void func1(char str1[])
{
	printf("length_str1=%lu\n",sizeof(str1));
}

void func2(float str2[])
{
	printf("length_str2=%lu\n",sizeof(str2));
}

int main(void)
{
	int arr[] = {0,1,2,3,4,5,6};
	char str1[] = "helloworld!";
	float str2[] = {0.0,0.1,0.2,0.3,0.4,0.5,0.6};

	func(arr);
	func1(str1);
	func2(str2);

	return 0;
}

