/*

This program explains about the functions that do formatted output and place the results in        dynamically allocated memory.

Author	: Vivek Tiwari
Usage	: int asprintf (char **ptr, const char *template, ...)
Version : 1.0

*/

#include<stdio.h>
#include<string.h>
typedef struct
{
        int roll,age;
        char name[30],gender;
}student;

int main()
{
        char ch,*data;
        student s;
        FILE *fp;
        fp = fopen("Student.dat","w");
        printf("\n Enter Student Details\n");
        while(1)
        {
                printf("\n Enter Student Roll Number : ");
                 scanf("%d",&s.roll);
                printf("\n Enter Student Name : ");
                 scanf(" %[^\n]",s.name);
                printf("\n Enter Student Age : ");
                 scanf("%d",&s.age);
                printf("\n Enter Student Gender : ");
                 scanf(" %c",&s.gender);
                printf("\n Continue.......(Y/N) : ");
                scanf(" %c",&ch);
                asprintf(&data,"\n%4d|%-s|%4d|%1c",s.roll,s.name,s.age,s.gender);
                fputs(data,fp);
		if(ch=='n' ||ch=='N')
                        break;
        }
        fclose(fp);
	free(data);
}
                       
