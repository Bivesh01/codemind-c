#include<stdio.h>
int main()
{
    int l,k,r,count=0,i;
    scanf("%d %d %d",&l,&k,&r);
    for(i=l;i<=k;i++)
    {
        if(i%r==0)
        {
            count++;
        }
    }
    printf("%d",count);
}