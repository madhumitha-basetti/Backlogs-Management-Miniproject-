#include<stdio.h>
void year1(void);
void year2(void);
void year3(void);
void year4(void);
void sem1_1(void);
void sem1_2(void);
void sem2_1(void);
void sem2_2(void);
void sem3_1(void);
void sem3_2(void);
void sem4_1(void);
void sem4_2(void);
void read1_1(char *);
void read1_2(char *);
void read2_1(char *);
void read2_2(char *);
void read3_1(char *);
void read3_2(char *);
void read4_1(char *);
void read4_2(char *);

int backlog=0;

struct details
{
	char name[100];
	int year;
	char rollno[10];
};
struct details d;
main()
{
	printf("Enter name:");
	gets(d.name);
	printf("Enter year:");
	scanf("%d",&d.year);
	printf("Enter rollnumber:");
	fflush(stdin);
	gets(d.rollno);
	if(d.year==1)
	{
		year1();
	}
	if(d.year==2)
	{
		year1();
		year2();
	}
		if(d.year==3)
	{
		year1();
		year2();
		year3();
	}
		if(d.year==4)
	{
		year1();
		year2();
		year3();
		year4();
	}
	
}

void year1()
{
	
	sem1_1();
	sem1_2();

    
}
void year2()
{
	
	sem2_1();
	sem2_2();
}
void year3()
{
	
	sem3_1();
	sem3_2();
}
void year4()
{
	
	sem4_1();
	sem4_2();
}
void sem1_1()
{
    printf("\nEnter marks of each subject Scored in Sem 1\n\n");
	read1_1("Linear Algebra and Calculus");
	read1_1("Applied physics");
	read1_1("C programming");
	read1_1("Engineering Drawing");
	read1_1("Communicative English");
}


void  read1_1(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	fp=fopen("sem1_1back.dat","ab");
	lp=fopen("backlogs@cse.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
	if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,1,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
	void sem1_2()
{
    printf("\nEnter marks Of each subject scored in Sem 2\n\n");
	read1_2("Differential Equations & Transformations");
	read1_2("Python Programming");
	read1_2("Basic Electrical and Electronics");
	read1_2("Chemistry");
	read1_2("Environmental Science");
}


void  read1_2(char *p)
{
	int marks;
	static int j=1;
	FILE *fp;
	FILE *lp;
	fp=fopen("sem1_2back.dat","ab");
	lp=fopen("backlogs@cse.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
		if(j==1)
			{
				
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,2,p);
			}
		else
		{
			fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
		}

			printf("\n%d",backlog);
			j++;
		}
		
		printf("%d\n",j);
		fclose(fp);
		fclose(lp);
	}
	
void sem2_1()
{
	 printf("\nEnter marks of each subject scored in Sem 3\n\n");
	read2_1("Number Theory and Applications");
	read2_1("Database Management Systems");
	read2_1("Digital Logic Design");
	read2_1("Data structures");
	read2_1("Universal Human Values");
	read2_1("Biology for Engineers");
	
}


void  read2_1(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	fp=fopen("sem2_1back.dat","ab");
	lp=fopen("backlogs@cse.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,3,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
void sem2_2()
{
    printf("\nEnter marks of each subject scored in Sem 4\n\n");
	read2_2("Operating Systems");
	read2_2("Computer Organisation");
	read2_2("Software Engineering");
	read2_2("Discrete Mathematics");
	read2_2("Computer Graphics");
	read2_2("Enterpreneurship");
}

void  read2_2(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	lp=fopen("backlogs@cse.dat","ab");
	fp=fopen("sem2_2back.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,4,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
void sem3_1()
{
	printf("\nEnter marks of each subject scored in Sem 5\n\n");
	read3_1("Formal Languages and Automata Theory");
	read3_1("Artificial Intelligence");
	read3_1("Object oriented Analysis Design & Testing");
	read3_1("Computer networks-Professional Elective_I");
	read3_1("Computer netowrks-Open Elective-I");
}

void  read3_1(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	lp=fopen("backlogs@cse.dat","ab");
	fp=fopen("sem3_1back.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,5,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
void sem3_2()
{
	 printf("\nEnter marks of each subject scored in Sem 6\n\n");
	read3_2("Cryptography & Network Security");
	read3_2("Big Data Analysis");
	read3_2("English Communication");
	read3_2("Professional Elective II");
	read3_2("Open Elective II");
	read3_2("Humanities Electives I");
}

void  read3_2(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	lp=fopen("backlogs@cse.dat","ab");
	fp=fopen("sem3_2back.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,6,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
	
void sem4_1()
{
	 printf("\nEnter marks of each subject scored in Sem 7\n\n");
	read4_1("Internet of Things");
	read4_1("Software Testing");
	read4_1("Professional Elective-III Cloud Computing,NLP");
	read4_1("Open Electives-III");
	read4_1("Humanities Elective-II");
}


void  read4_1(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	lp=fopen("backlogs@cse.dat","ab");
	fp=fopen("sem4_1back.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,7,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
void sem4_2()
{
	 printf("\nEnter marks of each subject scored in Sem 8\n\n");
	read4_2("Professional Elective-IV");
	read4_2("Open Elective-IV");
	read4_2("Project");
	read4_2("Professional Elective II");
	read4_2("Open Elective II");
	read4_2("Humanities Electives I");
}
	
	
void  read4_2(char *p)
{

	int marks;
	static int i=1;
	FILE *fp;
	FILE *lp;
	lp=fopen("backlogs@cse.dat","ab");
	fp=fopen("sem4_2back.dat","ab");
	printf("\n%s\t\t\t",p);
	printf("Marks:");
	scanf("%d",&marks);
		if(marks>=0 && marks<40)
		{
			backlog++;
				if(i==1)
				{
				fprintf(fp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t\t\t\t%s",d.name,d.year,d.rollno,p);
				fprintf(lp,"\n\n%s\t\t\t\t\t%d\t\t\t%s\t\t%d\t\t%s",d.name,d.year,d.rollno,8,p);
			}
			else
			{
				fprintf(fp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
				fprintf(lp,"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",p);
			}

		    i++;
		
			printf("\n%d",backlog);

		}
			
		printf("%d\n",i);
	 fclose(fp);
	 fclose(lp);
	}
