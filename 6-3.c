// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number=");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {
       if(i%2==0)
       {
           sum=i+sum;
       }
    }
    printf("%d",sum);
  return 0;
}
    
