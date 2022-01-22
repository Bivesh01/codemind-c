#include<stdio.h>
int main()
{
    int n,rev=0,rem=0,s;
    scanf("%d",&n);
    s=n;
    
    while(n!=0)
    {
        rem=n%10;
        rev= rev*10+rem;
        n= n/10;
    }
    if(s == rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
}
    return 0;
}