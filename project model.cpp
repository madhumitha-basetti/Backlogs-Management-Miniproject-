#include<stdio.h>

struct details
{
	char name[50];
	char rollno[10];
	char branch[5];
	float attendance;
	int year;
};


main()
{
	FILE *fp;
	fp=fopen("stddetails.dat","ab");
	struct details d[100];
	int i,n;
	printf("Enter number of students:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
	printf("Enter name:");
	fflush(stdin);

	gets(d[i].name);

	printf("Enter rollno:");
	
	gets(d[i].rollno);
	fflush(stdin);
	printf("Enter Branch: ");
	gets(d[i].branch);

	printf("Enter Attendance:");
	scanf("%f",&d[i].attendance);
	printf("Enter year:");
	scanf("%d",&d[i].year);
    fprintf(fp,"\n%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%f\t\t\t\t%d\t\t\t\t\n",d[i].name,d[i].rollno,d[i].branch,d[i].attendance,d[i].year);
    
		
}
fclose(fp);
}
