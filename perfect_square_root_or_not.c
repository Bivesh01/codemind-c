#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    float s;
    scanf("%d",&n);
    s=sqrt(n);
    m=sqrt(n);
    if(s-m==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}