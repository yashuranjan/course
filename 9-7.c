/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()
{
    float x=224,amount=0,total=0;
    switch (x<=50)
    {
    case 1:
         amount=x*.25;
        break;
    case 0:
         switch (x<=150)
         {
         case 1:
             amount=50+(x-50)*.75;
             break;
         case 0:
              switch (x<=250)
              {
              case 1:
                 amount=100+(x-150)*1.20;
                  break;
              case 0:
                  amount=220+(x-250)*150;
                  break;
              }
                  break;
             break;
         }
      total=amount+amount*0.20;
      printf("total amount is %f",total);
      return 0;
    }
}
   