/*************************************************************************
    > File Name: addaword.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月18日 星期四 19时57分41秒
 ************************************************************************/
/* addaword.c -- uses fprintf()、fscanf()and rewind() */
#include<stdio.h>
#include<stdlib.h>
#define MAX 41

int main(void)
{
	FILE 	*fp;
	char 	words[MAX];
	int  	ch;
	int	line = 0;		


	if((fp =fopen("wordy","a+")) == NULL)
	{
		fprintf(stderr,"Can't  open\"wordy\' file.\n");
		exit(EXIT_FAILURE);
	}

	puts("Enter words to add to the file;press the #");
	puts("key at the beginning of a line to terminate.");
	while((ch = fgetc(fp)) != EOF)		//计算当前文件的行数，从1开始
	{
		if(ch == '\n')
			line++;
	}
	while((fscanf(stdin,"%40s",words) == 1) && (words[0] != '#'))
		fprintf(fp,"%d %s\n",++line,words);

	puts("File contents:");
	rewind(fp);		/* go back to beginning of file */
	while(fscanf(fp,"%s",words) == 1)
		puts(words);
	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr,"Error closing file\n");

	return 0;
}
