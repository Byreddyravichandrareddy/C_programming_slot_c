#include<stdio.h>
int main()
{
	int p,q,r,i,c=0;
	printf("enter the p,q and r values ");
	scanf("%d %d %d",&p,&q,&r);
	for(i=60;i<=70;i++)
	{
		if(r!=c)
		{
			printf("%d\n",i);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
	return 0;
}
