#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],s1[10000];int i,j,x,y,a,n,t;
    scanf("%d",&n);
    t=2*n;
    while(t--)
    {
        scanf("%s%s",s,s1);
        x=strlen(s);
        y=strlen(s1);

        if(x!=y)
            a=0;
        for(;x==y;)
             {a=0;
                 for(i=0;i<x;i++)
             {if(s[i]!=s1[i]&&(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'))
                a=1;
                }
        }
    if(a==1)
        printf("yes");
     else if(a==0)
     printf("no");
    }
    return 0;
}
