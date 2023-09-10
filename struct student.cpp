#include<stdio.h>
struct student
{
	int rollno;
	char name;
	float marks;
};
int main()
{
	int n;
	printf("enter the niumber of students ");
	scanf("%d",&n);
	struct student students[n];
	for(int i=0;i<=n;i++)
	{
		printf("enter the student details:");
		printf("rollno:");
		scanf("%d",students[i].rollno);
		printf("name:");
		scanf("%s",students[i].name);
		printf("marks:");
		scanf("%f",students[i].marks);
	}
	printf("enter the student details");
	for(int i=0;i<=n;i++)
	{
		printf("rollno %d\n",students[i].rollno);
		printf("name %s\n",students[i].name);
		printf("marks %f\n",students[i].marks);
	}
	return 0;
}
