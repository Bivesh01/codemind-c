#include<stdio.h>
int main()
{
    int n,sum=0,rem,check;
    scanf("%d",&n);
    check=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    if(check%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}