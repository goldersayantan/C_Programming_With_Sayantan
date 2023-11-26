// Check A Number Is Armstrong Or Not...
# include <stdio.h>
# include <math.h>
int main()    {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp1=num;
    int temp2=num;
    int count =0;
    while( num>0)    {
        num= num/10;
        count++;
    }
    int sum=0;
    int rem;
    while( temp1>0)    {
        rem=temp1%10;
        sum= sum+pow(rem,count);
        temp1=temp1/10;
    }
    if( sum == temp2)    {
    printf("Armstrong");
    }else    {
    printf("Not");
    }
return 0;    
}