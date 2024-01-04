//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
#include<stdio.h>
int main()
{
    int r;
    float c;
    printf("enter the radius of circle:");
    scanf("%d",&r);
    c=3.14*r*r;
    printf("the area of the circle is:%f",c);
    return 0;

    
}