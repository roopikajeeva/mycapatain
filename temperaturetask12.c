#include<stdio.h>
int main()
{
    float fah,cel;
    int ch=0;


    printf("Select one of the following conversions\n");
    printf("1.Celcius to fahrenheit\n2.Fahrenheit to celcius\n3.Exit\n\n");

    printf("Enter your choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            {printf("Celcius to fahrenheit\nEnter the temperature in celcius\n");
              scanf("%f",&cel);
              fah=(cel*9/5)+32;
              printf("Temperature in fahrenheit=%f",fah);
              break;
            }

        case 2:
            {printf("Fahrenheit to celcius\nEnter the temperature in fahrenheit\n");
              scanf("%f",&fah);
              cel=(fah-32)/1.8;
              printf("Temperature in celcius=%f",cel);
              break;
            }
        case 3:
            {
                break;
            }

         default:printf("Invalid choice");
                 break;




    }
}
