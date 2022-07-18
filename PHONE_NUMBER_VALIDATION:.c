#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int n,i,j,l;
    scanf("%s",s);
    l=strlen(s);
    if (s[0]!='0' && l==10)
    printf("Valid");
    else
    printf("Invalid");
}
