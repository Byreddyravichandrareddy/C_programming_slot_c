#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char sk[15];
 
 printf("Enter the String: ");
 gets(sk);
 printf("\nThe Reversed String is %s",strrev(sk));
 getch();
}
