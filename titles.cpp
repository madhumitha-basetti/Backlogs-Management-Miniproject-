#include<stdio.h>
main()
{
	
	FILE *fp;
	fp=fopen("stddetails.dat","wb");
	fprintf(fp,"\n\t\t\t\t\t\t\tJNTUA CSE STUDENTS DETAILS\n");
	fprintf(fp,"\n\t\t\t\t\t(DETAILS OF STUDENTS WHOSE ATTENDANCE IS GREATER THAN 75 PERCENT)\n");
	fprintf(fp,"\n\nSTUDENT NAME\t\t\t\t\tADMISSION NUMBER\t\t\t\tYEAR\t\t\t\tATTENDANCE PERCENTAGE\n");
	fclose(fp);
	
}
