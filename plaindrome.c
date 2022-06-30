#include<stdio.h>
int main(){
	int n, reversed=0 , remainder,original;
	printf("enter an integer:");
	scanf("%d",&n);
	original = n;

	//reversed integer is sorted in reversed variable
	while (n !=0){
	remainder =n% 10;
	reversed = reversed*10+remainder;
	n/=10;
}
//plaindrome if original and reversed are equal 
if(original==reversed)
	printf("%d is a plaindrome.",original);
else
	printf("%d is not a plaindrome.",original);

return 0;
}
