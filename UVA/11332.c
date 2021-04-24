#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000000];int i,j,k,l,n;
    while(scanf("%s",s)&&(s[0]-'0')!=0)
    {j=strlen(s);k=0;
    for(i=0;i<j;i++)
    {k=k+(s[i]-'0');}
    while(k>=10)
        {n=k;k=0;
        while(n>0)
        {k=k+n%10;
        n=n/10;}}
        printf("%d\n",k);}
        return 0;

}
