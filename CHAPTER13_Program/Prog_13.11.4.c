/*************************************************************************
    > File Name: Prog_13.11.4.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 14 Mar 2016 01:26:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	FILE *fp;

	if(argc == 1)
	{
		fprintf(stderr,"At least one argument is required\n");
		exit(EXIT_FAILURE);
	}	
	for(i = 1; i < argc; i++)
	{
		if((fp = fopen(argv[i],"r")) != NULL)
		{
			printf("%s\n",argv[i]);
			fclose(fp);
		}
		else
			fprintf(stderr,"File %s is not exist!\n",argv[i]);
	}
	

	return 0;
}
