//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.
#include<stdio.h>
int main()
{
  int x;
  printf("enter the number=");
  scanf("%d",&x);
  switch (x)
  {
  case 1:
        printf("monday");
        break;
    case 2:
        printf("tudesday");
        break;
    case 3:
        printf("wednesday");
         break;
    case 4:
        printf("thusday");
         break;
    case 5:
        printf("friday");
         break;
    case 6:
        printf("saturday");
         break;
    case 7:
        printf("sunday");
         break;
    default:
        printf("INVALID");
        break;
  }
  return 0;
}
