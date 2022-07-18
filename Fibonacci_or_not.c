#include<stdio.h>
int main()
{
 int n,i,f=0,f1=0,f2=1,a[40],c=0,flag=0;
 scanf("%d",&n);

 for(i=0;i<=n;i++)
 {
  if(f<=n)
  {
  if(f==n)
  {
      printf("True");
      flag++;
      break;
  }
  f=f1+f2;
  f1=f2;
  f2=f;
  }
 else
 break;
 }
 if (flag==0)
 printf("False");
}