//Write a program to print the first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the number=");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d ",n);
        n--;
    } 
    
  return 0;
}