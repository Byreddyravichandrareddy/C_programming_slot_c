#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("enter the number to be factorial ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of given number is %d",fact);
	return 0;
}
