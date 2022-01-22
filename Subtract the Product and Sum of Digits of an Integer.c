#include<stdio.h>
int main()
{
    int n,rem,sum=0,prod=1,diff;
    scanf("%d",&n);
    
        while(n!=0)
        {
        rem=n%10;
        sum=sum+rem;
        prod=prod*rem;
        n=n/10;
        }
    
    diff=prod-sum;
     
    printf("%d",diff);
    return 0;
}