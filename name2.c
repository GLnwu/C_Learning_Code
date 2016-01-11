/*************************************************************************
    > File Name: name2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月11日 星期一 19时35分49秒
 ************************************************************************/
//	name2.c:16:2: warning: ‘gets’ is deprecated (declared at /usr/include/stdio.h:638) [-Wdeprecated-declarations]
//  	ptr  =gets(name);
//    	^
//	/tmp/cch3Ffmz.o: In function `main':
//	name2.c:(.text+0x29): warning: the `gets' function is dangerous and should not be used.''
#include<stdio.h>
#define MAX 81
int main(void)
{
	char name[MAX];
	char * ptr;

	printf("Hi,waht's your name?\n");
	ptr  =gets(name);
	printf("%s? Ah! %s!",name,ptr);
	
	return 0;
}
