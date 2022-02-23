#include<stdio.h>
int main()
{
    int a,i,j=1,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=a;
        while(s!=0 && s>0)
        {
            printf("%d ",j);
            s-=1;
        }
        printf("
");
        j++;
    }
}