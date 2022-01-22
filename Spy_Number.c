/*
A Number is spy number if the sum of its 
digits equals the product of its digits.

*/


#include<stdio.h>
int main()
{
    int n,sum=0,prod=1,rem=0;
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        prod=prod*rem;
        n/=10;
    }
    if(prod==sum)
    {
        printf("Spy Number");
    }
    else
    {
     printf("Not Spy Number");   
    }
    return 0;
}