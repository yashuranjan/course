//Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the number=");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n%d*%d=%d",n,i,n*i);
        i++;
    }
 return 0;

}