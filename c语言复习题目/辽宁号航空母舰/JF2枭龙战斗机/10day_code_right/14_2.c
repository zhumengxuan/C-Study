#include <stdio.h>
//这是另一种循环移动的方法，算法上有一点点区别，理解起来更简单
//但是移动的次数会相对多一些
void arr_move(int arr[],int len,int m)
{
	int i,j;
	int temp =0;

	for(i=0;i<m;i++)
	{
		temp = arr[len-1];
		for(j=len-1;j>0;j--)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
}

int main(void)
{
	int n,m,i;
	printf("pls input n:\n");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
	{
		arr[i] = i+1;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	printf("pls input m:\n");
	scanf("%d",&m);

	arr_move(arr,n,m);

	printf("The moved array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}

