#include<stdio.h>
int main()
{
    int n,largest=0,rem,s;
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
    {
        if(largest<rem)
        {
            largest=rem;
        }
        
    }
    n/=10;
    }
    printf("%d",largest);
}