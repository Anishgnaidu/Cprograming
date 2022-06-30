//Program to stimulate a simple calculator
#include <stdio.h>

int main()
{
	//Variablr decleration
	int num1,num2,sum;
	char op;
	printf("Enter an arithmatic operator:");
	scanf("%c",&op);
	printf("Enter Two Numbers:");
	scanf("%d%d",&num1,&num2);
	if(op=='+')
	{
		sum=num1+num2;
	}
	else if(op=='-')
	{
		sum=num1-num2;
	}
	else if(op=='*')
	{
		sum=num1*num2;
	}
	else if(op=='/')
	{
		if(num2==0)
		{
			printf("Divide by zero error\n")
			retur 1;
		}

		sum=num1/num2;
	}
	else if(op=='%')
	{
		sum=num1%num2;
	}
	printf("\n%d %c %d = %d\n",num1,op,num2,sum);
	return 0;
} 
