#include<stdio.h>
int main()
{
    int n,f=1,i,rem,A=0,sum=0,stored;
    scanf("%d",&n);
    stored=n;
    while(n!=0)
    {
       
        rem=n%10;
        A=A+rem;
    for(i=1;i<=A;i++)
    {
        f=f*i;
    }
    
    sum=sum+f;
    n/=10;
    f=1; //To calculate the factiorial from 1
    A=0; //To divide each digit without getting previous value of a
    
    }
    if( sum==stored )
     printf("The number %d is a strong number",stored);
    else
     printf("The number %d is not a strong number",stored);
    return 0;
}