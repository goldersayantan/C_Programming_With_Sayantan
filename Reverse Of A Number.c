// Reverse Of A Number...
# include<stdio.h>
int main()    {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int rem, revnum=0;
    while(num>0)    {
        rem=num%10;
        revnum=revnum*10+rem;
        num=num/10;
    }
    printf("The number in reverse is: %d",revnum);
return 0;
}