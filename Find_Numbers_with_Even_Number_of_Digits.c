#include<stdio.h>
int main()
{
    int n,a[500],i,c=0,count=0,j,rem;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        j=0;
        while(a[i]!=0)
        {
            rem=a[i]%10;
            a[i] /= 10;
            j++;
        }
        
        if(j%2==0)
        {
           count++; 
        }
    }
    printf("%d",count);
}