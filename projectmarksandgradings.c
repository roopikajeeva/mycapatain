#include<stdio.h>
int main()
{
    int n,i,total=0,a[100],count=0;
    float avg;

    printf("Enter the number of subjects:\n");
    scanf("%d",&n);

    printf("Enter the marks secured in each subject:\n");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]<50)
        {
            count++;
        }
        else
        {
            total=total+a[i];

        }
    }
    if(count!=0)
    {
        printf("THE STUDENT HAS TO REAPPEAR\n");

    }
    else
    {
        printf("THE STUDENT HAS PASSED IN ALL SUBJECTS\n");
        printf("\nTOTAL=%d\n",total);
        avg=total/n;
        printf("\nAVERAGE=%2f",avg);
    }

    if(avg>=85)
    {
        printf("\nGRADE A\n");
    }
    else if(avg>=65 && avg<85)
    {
        printf("\nGRADE B\n");
    }
    else if(avg>=50 && avg<65)
    {
        printf("\nGRADE C\n");
    }
}
