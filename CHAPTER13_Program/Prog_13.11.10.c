/*************************************************************************
    > File Name: Prog_13.11.10.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 22 Mar 2016 06:23:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 100
void output(FILE *fp,int row,int column);

int main(void)
{
	FILE 	*fp;
	char 	file_name[MAX];
	int 	row,column;

	printf("Enter a file name!\n");
	scanf("%s",file_name);
	fp = fopen(file_name,"r");
	if(fp == NULL)
	{
		fprintf(stderr,"Can't open file %s\n",file_name);
		exit(EXIT_FAILURE);
	}
	printf("%s is opened.Please enter a row number:\n",file_name);
	scanf("%d",&row);
	printf("Please enter a column number:\n");
	while(scanf("%d",&column) != 0)
	{
		output(fp,row,column);
		printf("Please enter a row number:\n");
		scanf("%d",&row);
		printf("Please enter a column number:\n");
		printf("Enter q to quit:\n");
	}

	return 0;
}
void output(FILE *fp,int row,int column)
{
	int i;
	char ch;

	for(i = 1; i < row;i++)
		fgets(fp);
	for(i = 1; i < column;i++)
		fgetc(fp);
	while(( ch = fgetc(fp)) != '\n')
		fputc(ch,stdout);
}
