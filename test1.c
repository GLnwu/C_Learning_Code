#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[17];
	char *ip;

	a[9]='\0';	
	a[11]='5';
	
	ip=&a[0];
	
	printf("%zu\n",strlen(a));
	printf("%zu\n",sizeof(a));
	printf("%zu\n",sizeof(ip));
	
	return 0;
}
