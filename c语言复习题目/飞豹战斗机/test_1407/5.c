#include <stdio.h>
#include <assert.h>
#include <string.h>

/*错误写法，因为这里面不需要i了
	char *mystrcpy(char *dest,const char *src)
	{
		int i = 0;
		while(*(src+i)!='\0')
		{
			*dest++ = *src++;
			i++;
		}
	}
*/

/*正确写法
	char *mystrcpy(char *dest,const char *src)
	{
		char *d = dest;
		while(*src!='\0')
		{
			*dest++ = *src++;
		}
		*src = '\0';//注意这里的\0要手动拷贝过去
		return d;
	}
*/

char *mystrcpy(char *dest,const char *src)
{
	char *d = dest;
	const char *s = src;	

	assert(src);
	assert(dest);//判断指针是否为NULL

	if(src == dest)
		return dest;

	int count = strlen(src) + 1;
	//int count = sizeof(src); //不能这样测，只能用循环做
	if(count <= 1)//存在的必要性：指针有地址，但是没有值或者只有一个\0
		return 0;
	
	if(dest < src || dest > (src+count) ) 
	//注意这个条件：dest小于小的，却大于大的
	{
		while(count --)
		{	
			//*dest++ = *src++;//这样写错误
			*d ++ = *s ++;
		}
	}
	else
	{
		//s = src+count; //这样错位了，第一个没有拷贝，末尾越界拷贝了一个
		s = src + count - 1;//src+count越界
		d = dest + count - 1;//dest+count-1是\0的位置
		while(count --)
		{
			*d -- = *s --; 
		}
	}
	return dest;//返回的值的探讨
}

int main(void)
{
    const char *src = "sdaafwkugrrfldg";
	char dest[50] = {'\0'};

	printf("The src is:\n");
	printf("%s\n",src);
	
	mystrcpy(dest,src);

	printf("The dest is:\n");
	printf("%s\n",dest);

	return 0;
}

