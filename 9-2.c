//  Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
    printf("\n 1.Addition");
    printf("\n 2.substract");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.exit");
    printf("enter your choice=");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("enter two number=");
        scanf("%d%d",&a,&b);
        printf("sum is %d",a+b);
        break;
    case 2:
        printf("enter two number");
        scanf("%d%d",&a,&b);
        printf("subtract is %d",a-b);
        break;
    case 3:
        printf("enter two number");
        scanf("%d%d",&a,&b);
        printf("multlication is %d",a*b);
        break;
    case 4:
        printf("enter two number");
        scanf("%d%d",&a,&b);
        printf("division is %d",a/b);
        break;
    case 5:
        exit(0);
    default:
         printf("error");
        break;
    }
    printf("\n");
  }
      return 0;
}