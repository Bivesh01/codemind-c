#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,s,a;
    scanf("%f %f %f",&A,&B,&C);
    s=(A+B+C)/2;
    a=sqrt(s*(s-A)*(s-B)*(s-C));
    printf("%.2f",a);
}