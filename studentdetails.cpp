#include<stdio.h>
main()
{
	struct details
	{
		char name[30];
		char rollno[20];
		int year;
		int attendance;
	};
	int n,i;
	FILE *fp;
	fp=fopen("stddetails.dat","ab");
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		struct details d[100];
		printf("Enter Student name:");
		fflush(stdin);
		gets(d[i].name);
		fflush(stdin);
		printf("Enter Roll number:");
		gets(d[i].rollno);
		printf("Enter Year:");
		scanf("%d",&d[i].year);
		printf("Enter Attendance:");
		scanf("%d",&d[i].attendance);
		fprintf(fp,"\n\n%s\t\t\t\t\t\t%s\t\t\t\t\t%d\t\t\t\t\t%d\n",d[i].name,d[i].rollno,d[i].year,d[i].attendance);
	}
		fclose(fp);
}
