 //Write a program to calculate sum of cubes of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       sum=((i*i*i)+sum);
    }
    printf("sum is %d",sum);
  return 0;
}