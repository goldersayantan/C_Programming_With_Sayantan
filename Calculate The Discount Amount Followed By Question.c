/* Write a c program to calculate 
the discount amount by taking 
the price of the product as a input from the user 
if the discount is greater than 10% but less than 50%,
18% GST is to be added to the total bill 
and if it is more than 50% but less than 100%,36% GST will be applied.
*/
# include <stdio.h>
int main()    {
    int pri, dis;
    printf("Enter the price of the product: ");
    scanf("%d",&pri);
    printf("Enter the discount of the product: ");
    scanf("%d",&dis);
    int temp, val;
    if( dis>=10 && dis<50 )    {
    temp= (pri-((pri*dis)/100));
    val=temp+((temp*18)/100);
    printf("The value is: %d",val);
    }else if( dis>=50 && dis<100)    {
    temp= (pri-((pri*dis)/100));
    val=temp+((temp*36)/100);
    printf("The value is: %d",val);
    }else if( dis ==100)    {
    printf("Don't need to buy");
    }else    {
    temp= (pri-((pri*dis)/100));
    val=temp;
    printf("The value is: %d",val);
    }
return 0;
}