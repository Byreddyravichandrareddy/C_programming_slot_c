#include<stdio.h>
int main()
{
	int age,diff;
	printf("enter the age ");
	scanf("%d",&age);
	if(age>=18)
	{
	  printf("eligible for voting ");
	}else
	 {
	  diff=(18-age);
	printf("not eligible for voting still %d years left ",diff);
}
	return 0;
}
