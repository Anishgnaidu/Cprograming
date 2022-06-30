#include<stdio.h>


int main()
{
	int n;
	printf("Enter the size ");
	scanf("%d",&n);
	int marks[n];
	printf("Enter the marks");
	for(int i=0;i<n;i++)
	{
	  	scanf("%d",&marks[i]);
	}
	printf("The marks are:");
	
	for(int i=0;i<n;i++)
	{
		printf("%d/n",marks[i]);
	}
	return 0;

}
