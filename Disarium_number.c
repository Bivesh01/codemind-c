#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,rem,sum=0,ts,ps;
    scanf("%d",&n);
    ps=n;
    ts=n;
    i=1;
    while(ts!=0)
    {
        rem=ts%10;
        j++;
        ts /=10 ;
    }

    
    while(ps!=0)
    {
        rem=ps%10;
        sum=sum+pow(rem,j);
        j--;
        ps /= 10;
    }
  
    if(n==sum)
    {
        printf("True");
    }
    else
    printf("False");
}