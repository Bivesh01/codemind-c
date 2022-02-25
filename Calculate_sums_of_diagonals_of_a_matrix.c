#include<stdio.h>
int main()
{
    int matrix[100][100],i,j,psum=0,ssum=0,s;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(i==j)
            {
                psum=psum+matrix[i][j];
                
            }
            
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(i==(s-j-1))
            {
                ssum=ssum+matrix[i][j];
            }
            
        }
    }
    
    
    printf("Principal Diagonal:%d
",psum);
    printf("Secondary Diagonal:%d",ssum);
    
}