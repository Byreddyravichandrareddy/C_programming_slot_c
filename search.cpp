#include<stdio.h>
int main()
{
	int a[]={16,18,27,16,23,21,19};
	int n,i,e,f=0,p;
	n=sizeof(a)/sizeof(a[0]);
	scanf("%d",&e);
	for(i=0;i<n;i++);
	{
	    if(e==a[i])
	    {
	        f=1;
	        p=i;
	   }
	   if(f==1)
	      printf("%d is found at %d",e,p+1);
	   else
	      printf("element not found ");1
    }
	return 0;
}
