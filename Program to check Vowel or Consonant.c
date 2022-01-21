#include<stdio.h>
int main()
{
    char x,l,u;
    scanf("%c",&x);
    l=( x =='a' || x=='e'|| x=='i'||x =='o'|| x == 'u');
    u=( x =='A' || x =='E' ||x =='I' ||  x =='O'|| x=='U');
    if(l || u)
    printf("Vowel");
    else
    printf("Consonant");
    
    return 0;
}