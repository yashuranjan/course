//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int N,s=0,i=1;
    printf("enter the number=");
    scanf("%d",&N);
     for(i=1;i<=N;i++)
         s=s+i;
     printf("sum is =%d",s);
  return 0;
}
