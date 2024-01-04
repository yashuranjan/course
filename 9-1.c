//Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("january");
        break;
    case 2:
        printf("feburary");
        break;
    case 3:
        printf("march");
         break;
    case 4:
        printf("April");
         break;
    case 5:
        printf("may");
         break;
    case 6:
        printf("june");
         break;
    case 7:
        printf("july");
         break;
    case 8:
        printf("August");
         break;
    case 9:
        printf("september");
         break;
    case 10:
        printf("octuber");
         break;
    case 11:
        printf("november");
         break;
    case 12:
        printf("december");
         break;
    default:
         printf("invalid");
        break;
    }
  printf("\n");
  return 0;
} 
