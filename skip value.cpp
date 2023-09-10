#include<stdio.h>
int main()
{
	int p,q,r,i,c=0;
	printf("enter the values of p,q and r");
	scanf("%d %d %d",&p,&q,&r);
	for(i=p;i<=q;i++)
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
