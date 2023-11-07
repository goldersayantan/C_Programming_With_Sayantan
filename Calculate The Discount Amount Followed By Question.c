/* Write a c program to calculate 
the discount amount by taking 
the price of the product as a input from the user 
if the discount is greater than 10% but less than 50%,
18% GST is to be added to the total bill 
and if it is more than 50% but less than 100%,2% GST will be applied.
*/
#include<stdio.h>
int main()    {
    float amt,dis;
    printf("Enter amount:");
    scanf("%f",&amt);
    printf("Enter discount:");
    scanf("%f",&dis);
    if(dis>=10&&dis<=50)    {
    float bill1=(amt-((amt*dis)/100));
    float bill2=(bill1+((bill1*18)/100));
    printf("The final bill is: %f",bill2);
    }else if(dis>50&&dis<=100)  {
    float bill3=(amt-((amt*dis)/100));
    float bill4=(bill3+((bill3*2)/100));
    printf("The final bill is: %f",bill4);
    }else
    printf("ERROR!");
return 0;
}