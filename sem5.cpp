#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("sem3_1back.dat","wb");
	fprintf(fp,"\n\t\t\t\t\t\t\tLIST OF STUDENTS HAVING BACKLOGS IN SEMESTER V SUBJECTS\n\n");
	fprintf(fp,"\nNAME\t\t\t\t\tYEAR\t\t\tADMISSION NUMBER\t\t\t\t\t\tSEM 5 BACKLOGS\n");
	fclose(fp);
}
