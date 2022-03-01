#include <stdio.h>
        
int main()
{
   int n,i,j,a[20],c=0;
   scanf("%d",&n);
  
   for(i = 0; i < n; i++)
      {
      scanf("%d",&a[i]);
      }
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(a[i] == a[j] && i != j)
         break;
      }
      if(j == n ){
       printf("%d ",a[i]);
       c++;
      }
      
   }
   if(c==0)
      {
      printf("-1");
      }
   return 0;
}

