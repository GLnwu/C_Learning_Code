/*************************************************************************
    > File Name: names3.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 07 May 2016 04:11:29 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>	//for the using of strcpy(),strlen()
#include <string.h>	//for the using of malloc(),free()
#define SLEN 81
struct namect {
	char * fname;
	char * lname;
	int letters;
};

void getinfo(struct namect *);	//allocate memory
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);//free memory when done
char * s_gets(char * st,int n);	

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	return EXIT_SUCCESS;
}

void getinfo(struct namect * pst)
{
	char temp[SLEN]
	printf("Please enter your first name.\n");
	s_gets(temp,SLEN);
	//allocate memory to hold name
	pst->fname = (char *)malloc(strlen(temp) + 1);
	//cpoy name to allocated memory
	strcpy(pst->fname,temp);
	printf("Please enter your last name.\n");
	s_gets(temp,SLEN);
	ps->lname = (char *)malloc(strlen(temp) + 1);
	strcpy(pst->lname,temp);
}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) +
	     	strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s.your name contains %d letters.\n",
			pst->fname,pst->lname,pst->letters);
}

void cleanup(struct namect * pst)
{
	if(NULL != pst)
	{
		return;
	}
	free(pst->fname);
	free(pst->lname);
}
char * s_gets(char * st,int n)
{
	char * ret_val = NULL;
	char * find;

	if(NULL == st)	{
		return ret_val;
	}

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');	//look for newline
		if(find)		//if the pointer is not NULL
		{
			*find = '\0';	//place a null terminator there
		}
		else
		{
			while('\n' == getchar())		
				continue;	//dispose of rest of line.
		}

}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s.your name contains %d letters.\n",
			pst->fname,pst->lname,pst->letters);
}

char * s_gets(char * st,int n)
{
	char * ret_val = NULL;
	char * find;

	if(NULL == st)
	{
		return ret_val;
	}

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');		//look for newline
		if(find)			//if the pointer is not NULL
		{
			*find = '\0';		//place a null terminator there
		}
		else
		{
			while('\n' == getchar())		
				continue;	//dispose of rest of line.
		}

	}
}
