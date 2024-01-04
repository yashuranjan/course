// Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int x,y=0,n;
    printf("enter the number=");
    scanf("%d",&x);
    while(x!=0)
    {
        n=x%10;
        y=y*10+n;
        x=x/10;
    }
    printf("%d",y);
  return 0;
}