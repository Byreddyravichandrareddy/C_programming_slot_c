#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];   
	char *p;
	int len,i;
	p=str;
	gets(str);
    len=strlen(str);
    for(i=len;i<=0;i--)
        printf("%c",*(str+i));
	return  0;
}
