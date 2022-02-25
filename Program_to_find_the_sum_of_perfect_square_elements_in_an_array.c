#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,a[100],s,sum=0;
    float sf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(a[i]);
        sf=sqrt(a[i]);
        if(sf-s==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}