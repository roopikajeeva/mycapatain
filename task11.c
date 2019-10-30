
// WRITE A C PROGRAM TO CREATE A STRUCTURE CALLED BOOK AND STORE THE TITLE, AUTHOR AND GENRE. READ THESE VALUES FROM THE USER AND DISPLAY THEM BACK, USING FUNCTIONS.
#include<stdio.h>
#include<string.h>
#define SIZE 20
struct book
{
          char title[20];
          char author[20];
          char genre[10];

};

void output(struct book v[],int n);

void main()
{
          struct book b[SIZE];

          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)

          {
 			printf("\t=:Book %d Detail:=\n",i+1);

            printf("\nEnter the Book Name:\n");
            scanf("%s",b[i].title);

            printf("Enter the Author of Book:\n");
            scanf("%s",b[i].author);

            printf("Enter the Genre of Book:\n");
            scanf("%s",b[i].genre);
          }
          output(b,num);
}

void output(struct book v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

           printf("\n");
           printf("Book No.%d\n",t);
           printf("\t\tBook %d Name is=%s \n",t,v[i].title);
           printf("\t\tBook %d Author is=%s \n",t,v[i].author);
           printf("\t\tBook %d Genre is=%s \n",t,v[i].genre);
           printf("\n");
          }
}
