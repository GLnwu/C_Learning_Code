#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 256

int main(int argc,char * argv[])	
{
	FILE * fp;
	char array[MAX+1];

	
	if(argc != 3)
	{
		fprintf(stderr,"Usage: program [character] filename\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[2],"r");
	if(fp == NULL)
	{
		fprintf(stderr,"Can't open %s",argv[2]);
		exit(EXIT_FAILURE);
	}
	while(fgets(array,MAX,fp) != NULL)
		if( strchr(array,argv[1][0]) != NULL)
				fputs(array,stdout);
	if(fclose(fp) != 0)
	{
		fprintf(stderr,"Error closing file %s",array);
		exit(EXIT_FAILURE);
	}

	return 0;	
}	
