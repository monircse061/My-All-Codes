#include<stdio.h>
int main()
{
    char s[10000];int i,a,b,t,w,n,l,c,j=0;
    scanf("%d",&c);
    while(c--)
    {scanf("%d%s",&n,s);
     a=0;b=0;t=0;w=0;
    for(i=0;i<n;i++)
        {if(s[i]=='B')
          b++;
    else if(s[i]=='W')
        w++;
    else if(s[i]=='T')
        t++;
    else if(s[i]=='A')
        a++;}
        j++;
        if(w==0&&t==0&&b!=0)
            printf("Case %d: BANGLAWASH\n",j);
        else if(b==0&&t==0&&w!=0)
            printf("Case %d: WHITEWASH\n",j);
        else if(b+w+t==0)
            printf("Case %d: ABANDONED\n",j);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n",j,b,t);
        else if(b>w&&(a!=0||w!=0||t!=0))
            printf("Case %d: BANGLADESH %d - %d\n",j,b,w);
        else if(w>b&&(a!=0||t!=0||b!=0))
            printf("Case %d: WWW %d - %d\n",j,w,b);}
        return 0;
}
