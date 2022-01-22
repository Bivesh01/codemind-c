/*
A neon number is a number where the 
sum of digits of square of the number
is equal to the number.
*/

#include<stdio.h>
int main()
{
    int n,p,rem=0,sum=0;
    scanf("%d",&n);
    p=n*n;
    while(p!=0)
    {
        rem=p%10;
        sum=sum+rem;
        p/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}