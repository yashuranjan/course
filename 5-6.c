//Write a program to print the first N even natural numbers.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the number=");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==1)
        {
            printf("%d  ",i);
        }
      i++;
    }
    
  return 0;
}