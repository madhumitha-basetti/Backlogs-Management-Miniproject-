#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("backlogs@cse.dat","wb");
	fprintf(fp,"\n\t\t\t\t\t\t\tLIST OF ALL STUDENTS HAVING BACKLOGS \n\n");
	fprintf(fp,"\nNAME\t\t\t\t\tYEAR\t\t\tROLLNO\t\t\tSEM\t\t BACKLOGS\n");
	fclose(fp);
}
