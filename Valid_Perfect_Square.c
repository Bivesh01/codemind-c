#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n[i],s;
    float p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        s=sqrt(n[i]);
        p=pow(n[i],0.5);
        if(p==s)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
    
}