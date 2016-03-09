/* Review Questions 4 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int count = 0;
	double sum = 0;
	double i;
	FILE *fp;

	if(argc > 2)
	{
		fprintf(stderr,"file's argument should be less than 1");
		exit(EXIT_FAILURE);
	}
	if(argc == 1)
	{
		printf("Enter the numbers(q to quit:  ");
		while(fscanf(stdin,"%lf",&i) != 0)
		{	sum += i;
			count++;
			printf("Enter the numbers(q to quit:  ");
		}
	}
	if(argc == 2)
	{	fp = fopen(argv[1],"r");
		if(fp == NULL)
		{
			fprintf(stderr,"Error open file %s",argv[1]);
			exit(EXIT_FAILURE);
		}
		while(fscanf(fp,"%lf",&i) != EOF)
		{	
			sum += i;
			count++;
		}
		if(fclose(fp) != 0)
		{
			fprintf(stderr,"Can't close file %s\n",argv[1]);
			exit(EXIT_FAILURE);
		}
	}

	if(count == 0)
	{
		fprintf(stderr,"At least one number is required!\n");
		exit(EXIT_FAILURE);
	}
	printf("Mean = %f\n",sum / count);

	return 0;
}

