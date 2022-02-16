#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,res,u;
    scanf("%d %d %d",&x,&y,&m);
    u=pow(x,y);
    res=u%m;
    printf("%d",res);
}