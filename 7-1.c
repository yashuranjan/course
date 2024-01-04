//. Write a program to print first N terms of Fibonacci series.
/*#include<stdio.h>
int main()
{
    int n,x=-1,y=1,z,i;
        printf("ENTER the number=");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            z=x+y;
            printf("%d",z);
            x=y;
            y=z;
        }
     return 0;
}

*/
#include<stdio.h>
void printn(int);
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    printn(a);
    return 0;
}
void printn(int n)
{
    if (n%2==0)
    {
      printn(n-2);
      printf(" %d",n);
    }
}
    