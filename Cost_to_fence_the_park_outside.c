#include<stdio.h>
int main()
{
    int L,B,W,C,area,Total;
    scanf("%d %d %d %d",&L,&B,&W,&C);
        area=((L+2*W)*(B+2*W))-L*B;
        Total=area*C;
        printf("%d",Total);
    return 0;
}