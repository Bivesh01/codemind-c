#include<stdio.h>
int main()
{
    int n,i,j,rem,oc=0,ec=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
        {
            ec++;
        }
        else
        oc++;
        
        n /=10;
    }
    if(ec>=1 && oc>=1)
     printf("Mixed");
    else if(ec>=1)
    printf("Even");
    else
    printf("Odd");
}