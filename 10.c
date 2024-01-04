//WAP to take date as an input in below given format and convert the date format and
//display the result as given below.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the date format:");
    scanf("%d//%d//%d",&a,&b,&c);
    //printf("\\%d//%d//%d",a,b,c);
    printf("DD-%d,MM-%d,YY-%d",a,b,c);
    return 0;
}