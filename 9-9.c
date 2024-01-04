/*Program to Convert even number into its upper nearest odd number
Switch Statement */
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    switch (a%2==0)
    {
    case 0:
          int y;
          y=a+1;
          printf("%d",y);
          break;
    case 1:
          printf("odd number");
          break;
    
    default:
        break;
    }
  return 0;
}