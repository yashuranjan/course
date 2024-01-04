//Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
  int i=1,n;
  printf("enter the number=");
  scanf("%d",&n);
  while(n>=i)
  {
      if(n%2==1)
      {
          printf(" %d ",n);
      }
    n--;
  }
 return 0;

}