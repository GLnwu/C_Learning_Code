#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char Firstname[40];	
	char Lastname[40];

	printf("Input your firstname please:___\b\b\b");
	scanf("%s",Firstname);
	printf("Input your lastname please:___\b\b\b");
	scanf("%s",Lastname);

	printf("%s ",Firstname);
	printf("%s\n",Lastname);

	for(i=1;i<strlen(Firstname);i++)
		printf(" ");
	printf("%lu ",strlen(Firstname));	

	for(i=1;i<strlen(Lastname);i++)
		printf(" ");
	printf("%lu\n",strlen(Lastname));	

	printf("%s ",Firstname);
	printf("%s\n",Lastname);

	printf("%lu ",strlen(Firstname));	
	for(i=1;i<strlen(Firstname);i++)
		printf(" ");
	printf("%lu\n",strlen(Lastname));	
	for(i=1;i<strlen(Lastname);i++)
		printf(" ");
	return 0;
}
	
