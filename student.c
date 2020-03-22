// Student record input and display.
#include<stdio.h>
#include<stdlib.h>

typedef struct school
    {
        int roll;
        char name[20];
        char clas[3];
        char sec;
        char sub[5][10];
        int mark[5];
        long ph;
    } stud;

 void details_input(stud pp[],int n)
 {
    printf("Enter %d student details: \n",n);
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\nEnter student's roll number: ");
        scanf("%d",&pp[i].roll);
        printf("Enter name: ");
        scanf("%s",pp[i].name);
          while ((getchar()) != '\n');
        printf("Enter your class: ");
        scanf("%s",pp[i].clas);
        printf("Enter your section: ");
        while ((getchar()) != '\n');
        pp[i].sec=getchar();
        printf("Enter subject and marks of 5 subjects: ");
        for(j=0;j<5;j++)
        {
            scanf("%s",pp[i].sub[j]);
            scanf("%d",&pp[i].mark[j]);
        }
        printf("Enter phone number: ");
        scanf("%ld",&pp[i].ph);
    }
 }
 void details_output(stud pp[],int n)
 {
    printf("Details of %d student: \n",n);
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n\n  Roll Number: %d",pp[i].roll);
        printf("\n  Name: %s",pp[i].name);
        printf("\n  Class: %s",pp[i].clas);
        printf("\n  Section: %c",pp[i].sec);
        printf("\n  Subject     Marks");
        for(j=0;j<5;j++)
            printf("\n  %s           %d",pp[i].sub[j],pp[i].mark[j]);
        printf("\n  Phone number: %ld",pp[i].ph);
    }
 }

int main()
{

    int n;
    printf("Enter how many students record you want to take: ");
    scanf("%d",&n);
    stud pp[n];
    details_input(pp,n);
    details_output(pp,n);



}
