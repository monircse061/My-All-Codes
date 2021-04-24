#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    long long x,y,z,a,b,c,i,j,d,e,f,m,n,g,h;
    double o,w,p,q;
    while(gets(s))
    {   gets(s1);
        x=strlen(s);
        a=0;
        b=0;
        d=0;
        e=0;
        y=strlen(s1);
        for(i=0; i<x; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                a=a+(s[i]-96);
            else if(s[i]>='A'&&s[i]<='Z')
                b=b+(s[i]-64);
        }
        c=a+b;
        for(j=0; j<y; j++)
        {
            if(s1[j]>='a'&&s1[j]<='z')
                d=d+(s1[j]-96);
            else if(s1[j]>='A'&&s1[j]<='Z')
                e=e+(s1[j]-64);
        }
        f=d+e;
        p=c;
        while(p>=10)
        {
            h=p;
            p=0;
            while(h>0)
            {
                p=p+h%10;
                h=h/10;
            }
        }
        q=f;
        while(q>=10)
        {
            g=q;
            q=0;
            while(g>0)
            {
                q=q+g%10;
                g=g/10;
            }
        }
        if(p>q)
        {
            n=p;
            p=q;
            q=n;
        }
        o=p/q;
        w=o*100;
        printf("%.2lf %%\n",w);
    }
    return 0;

}
