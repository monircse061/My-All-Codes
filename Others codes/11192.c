#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf
int main()
{
    char s[1000];int i,j,k,ln,n;
    while(sf("%s %d",s,&n)!=EOF)
    {ln=strlen(s);
    k=ln/n;
    for(i=1;i<=k;i++)
    {
        for(j=k*i-1;j>=k*i-k;j--)
        {
            pf("%c",s[j]);
        }
    }
    pf("\n");}

    return 0;
}
