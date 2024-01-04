// Write a program to check whether a given number is a Prime number or not.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    for ( i = 1; i<=n-1; i++)
    {
        if(i==n)
        {
           printf("prime number");
            break;
        }
    }
    
    if (i==n)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not prime number");
    }
     return 0;
}