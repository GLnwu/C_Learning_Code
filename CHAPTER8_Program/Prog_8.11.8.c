#include<stdio.h>
void add(void);		//处理加法运算
void subtract(void);	//处理减法运算
void multiply(void);	//处理乘法运算
void divide(void);	//处理除法运算
void print(void);	//打印菜单信息

int main(void)
{
	int c;

	print();
	while((c=getchar()) != 'q')
	{
		switch(c)
		{
			case 'a':add();		print();break;
			case 's':subtract();	print();break;
			case 'm':multiply();	print();break;
			case 'd':divide();	print();break;
			default:			break;
		}
	}
	return 0;
}

void add(void)
{
	float a,b;
	int c;

	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	while(scanf("%f",&b) != 1)
	{	while((c = getchar()) != '\n')
			putchar(c);
		printf(" is not a number\n");
		printf("Please enter a numer,such as 2.5, -1, 78E8, or 3; 1:");
	}
	printf("%g + %g = %g\n",a,b,a+b);
}

void subtract(void)
{
	float a,b;
	int c;

	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	while(scanf("%f",&b) != 1)
	{	while((c = getchar()) != '\n')
			putchar(c);
		printf(" is not a number\n");
		printf("Please enter a numer,such as 2.5, -1, 78E8, or 3; 1:");
	}
	printf("%g - %g = %g\n",a,b,a-b);
}

void multiply(void)
{
	float a,b;
	int c;

	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	while(scanf("%f",&b) != 1)
	{	while((c = getchar()) != '\n')
			putchar(c);
		printf(" is not a number\n");
		printf("Please enter a numer,such as 2.5, -1, 78E8, or 3; 1:");
	}
	printf(" %g * %g = %g\n",a,b,a*b);
}

void divide(void)
{
	float a,b;
	int c;

	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	while(scanf("%f",&b) != 1)
	{
		while((c = getchar()) != '\n')
			putchar(c);
		printf(" is not a number\n");
		printf("Please enter a numer,such as 2.5, -1, 78E8, or 3; 1:");
	}
	while(b == 0)
	{
		printf("Enter a number other than 0:");
		scanf("%f",&b);
	}
	printf("%g / %g = %g\n",a,b,a/b);
}
	
void print(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add		s. subtract\n");
	printf("m. multiply	d. divide\n");
	printf("q. quit\n");
}
