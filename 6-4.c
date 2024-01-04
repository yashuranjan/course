//Write a program to calculate sum of first N odd natural number.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
        if (i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
  return 0;
}