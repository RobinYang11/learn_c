#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{	


	char *p="hello world";//这里的p指向的是“hello world 的第一个字母的位置，也就是内存地址”;
	printf("%p",p);//当打印p的地址是显示的“hello world”中第一个字母的内存地址
	printf("%s",p);//打印指针的内容时，则打印该数组所有的内容




	//string.h头文件
	//第一个方法
	//1.strlen(str) ,参数str一个字符串，返回值int
	//计算str 长度
	//例如
	char a[]="this is test";
	int len=strlen(a); //string  length;
	printf("str的长度是：%d",len);

	return 0;
}
