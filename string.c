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

	//2.memchr(str,ch,n) 在字符串str中的前n个字符中找ch第一次出现的位置，返回这个位置的内存地址，
	//返回一个char类型的指针

	char *aa="java is the worst language in the world";
	char *ps;
	ps=memchr(aa,'i',20);
	printf("%s\n", ps);

	return 0;
}
