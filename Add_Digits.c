#include<stdio.h>
int main()
{
    int num,i,k,sum=0,rem=0;
    scanf("%d",&num);
    while(num>0 || sum>9) //To check the num to be greater than 9 continue loop.
    {
        if(num==0)        //To Stop loop whem num=0
        {
            num=sum;      //EX. sum=2 -->num=2,sum=0
            sum=0;
        }
        rem=num%10;       //rem-->2
        sum=sum+rem;      //sum=0+2=2
        num/=10;
    }
    printf("%d",sum);    
}