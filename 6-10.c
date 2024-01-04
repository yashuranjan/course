//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int m,n,s;
    printf("enter the number=");
    scanf("%d%d",&n,&m);
    for(s=1; s<=m*n; s++)
    {
        if(s%m==0 && s%n==0)
        {
            break;
        }
    }
    printf("lcm is %d",s);
 return 0;
}

