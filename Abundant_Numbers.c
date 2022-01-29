#include<stdio.h>
int main()
{
    int n,i,sum=0,stored;
    scanf("%d",&n);
    stored=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
  
    if(stored<sum)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
}

//Bivesh0
