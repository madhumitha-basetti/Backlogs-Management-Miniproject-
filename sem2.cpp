#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("sem1_2back.dat","wb");
	fprintf(fp,"\n\t\t\t\t\t\t\tLIST OF STUDENTS HAVING BACKLOGS IN SEMESTER II SUBJECTS\n\n");
	fprintf(fp,"\nNAME\t\t\t\t\tYEAR\t\t\tADMISSION NUMBER\t\t\t\tSEM 2 BACKLOGS\n");	
	fclose(fp);
}
