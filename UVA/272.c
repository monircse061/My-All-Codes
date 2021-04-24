#include<stdio.h>
#include<string.h>
int main()
{
    int i,x,y,m,n,p,q,d,c;char s[1000],s1[1000];float o,a,b;
    while(scanf("%s%s",s,s1)!=EOF)
    {x=strlen(s);
    y=strlen(s1);
    m=0;n=0;
    for(i=0;i<x;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {m=m+(s[i]-96);}
        else if(s[i]>='A'&&s[i]<='Z')
        {n=n+(s[i]-64);}
    }
    d=m+n;
    m=0;n=0;
    for(i=0;i<y;i++)
        {if(s1[i]>='a'&&s1[i]<='z')
        {m=m+(s1[i]-96);}
    else if(s1[i]>='A'&&s1[i]<='Z')
        {n=n+(s1[i]-64);}}
        c=m+n;p=0;
        while(d>0)
        {{p=p+d%10;
        d=d/10;}
        if(p>=10)
            {d=p;p=0;
        continue;}
        a=p;}
        q=0;
        while(c>0)
              {{q=q+c%10;
       c=c/10;}
      if(q>=10)
            { c=q;q=0;
            continue;
            }b=q;}
            if(a<b)
            {o=((a/b)*100);}
            else if(b<a)
            {o=((b/a)*100);}
            else if(a==b)
            {o=((a/b)*100);}
            printf("%.2f %%\n",o);}
        return 0;
}
