/*************************************************************************
    > File Name: randbin.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年03月05日 星期六 23时34分40秒
 ************************************************************************/
/* randbin.c -- random access,binary i/o */
#include<stdio.h>
#include<stdlib.h>
#define ARSIZE 1000

int main(void)
{
	double 	numbers[ARSIZE];
	double 	value;
	const 	char * file = "numbers.dat";
	int 	i;
	long	pos;
	FILE	* iofile;

	//create a set of double values
	for(i = 0;i < ARSIZE;i++)
		numbers[i] = 100.0 * i +1.0/(i + 1);
	//attempt to open file
	if((iofile = fopen(file,"wb")) == NULL)
	{
		fprintf(stderr,"Could not open %s for output.\n",file);
		exit(EXIT_FAILURE);
	}
	//write array in binary format to file
	fwrite(numbers,sizeof(double),ARSIZE,iofile);		//把numbers数组内容，存放到iofile文件内
	fclose(iofile);
	if((iofile = fopen (file,"rb")) == NULL)
	{
		fprintf(stderr,"Could not open %s for random access.\n",file);
		exit(EXIT_FAILURE);
	}
	//read selected items from file
	printf("Enter an index in the range 0-%d.\n",ARSIZE - 1);
	while(scanf("%d",&i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);	//calculate offset;
		fseek(iofile,pos,SEEK_SET);		//go there
		fread(&value,sizeof(double),1,iofile);	//每次从iofile中读取一个double类型大小的内容，存到value中
		printf("The value there is %f.\n",value);
		printf("Next index (out of range to quit):\n");
	}//finish up
	fclose(iofile);
	puts("Bye!");

	return 0;
}
/* 通过numbers.dat文件存储numbers数组的内容，使得数组内的double数不会丢失精度。并通过fopen()以二进制模式打开numbers.dat文件，通过每个double数
 * 占据相同的空间大小的特点，通过fseek()函数调整文件当前指针，再通过fread()来读取当前文件位置指示指针的内容。
 */
