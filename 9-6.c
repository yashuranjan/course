/* Program to check whether a year is a leap year or not. Using switch
statement*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter the year= ");
    scanf("%d",&x);
    switch (x%100==0)
    {
    case 0:
        switch (x%400==0)
        {
        case 0:
            printf("leap year");
            break;
        case 1:
            printf("non leap year");
        }
        break;
    case 1:
          switch (x%4==0)
          {
          case 0:
              printf("leap year");
              break;
           case 1:
              printf("non leap year");
              break;
          }
       default:
        break;
    }
  return 0;
}