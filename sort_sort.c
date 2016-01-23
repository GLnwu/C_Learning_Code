/*************************************************************************
    > File Name: sort_sort.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年01月23日 星期六 22时03分13秒
 ************************************************************************/
/* sort_str.c -- 读进一些字符串并对它们排序 */
#include<stdio.h>
#include<string.h>
#define SIZE 81 			/* 字符串长度限制，包括\0 */
#define LIM 20				/* 最多读取的行数	  */
void stsrt(char *strings[],int num);	/* 字符串排序函数	  */

int main(void)
{
	char 	input[LIM][SIZE];		/* 存储输入的数组	  */
	char 	*ptstr[LIM];		/* 指针便来那个的数组	  */
	int 	ct = 0;			/* 输入计数		  */
	int 	k;

	printf("Input up to %d lines,and I will sort them.\n",LIM);
	printf("To stop,press the Enter key at a line's start.\n");
	while( ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];		/* 令指针指向输入字符串 */
		ct++;
	}
	stsrt(ptstr,ct);			/* 调用字符串排序函数 */
	puts("\nHere's the sorted list:\n");
	for(k =0; k < ct; k++)
		puts(ptstr[k]);			/* 排序后的指针 */

	return 0;
}
/* 字符串--指针--排序函数 */
void stsrt(char *strings[],int num)
{/* 双层for循环，采用了冒泡排序法 */
	char 	*temp;
	int 	top,seek;
	
	for(top = 0; top < num-1;top++)
		for(seek = top + 1;seek < num;seek++)
			if(strcmp(strings[top],strings[seek])>0) /* strcmp函数，若strings[top]的顺序先于strings[seek]，返回负值,相同返回0,落后返回正数 */
			{
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
}
