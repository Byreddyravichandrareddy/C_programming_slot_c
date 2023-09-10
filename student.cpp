#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	float marks;
};
int main()
{
	int n;
	printf("enter the number of students ");
	scanf("%d",&n);
	struct student students[n];
	for(int i=0;i<n;i++)
	{
		printf("\n enter details for student %d\n",i+1);
		printf("roll no:");
		scanf("%d",&students[i].rollno);
		printf("roll no:");
		scanf("%d",&students[i].rollno);
		printf("name:");
		scanf("%s",students[i].name);
		printf("marks:");
		scanf("%f",&students[i].marks);
	}
	printf("\n studnet information");
	for(int i=0;i<n;i++)
	{
		printf("rollno:%d\n",students[i].rollno);
		printf("name:%s\n",students[i].name);
		printf("marks:%2f\n",students6[i].marks);
		printf("\n");
	}
	return 0;
}
