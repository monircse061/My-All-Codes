#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,h,d,c,n,p,q,r,m,g,j,k=20,l=100,s;
    int a,b;
    scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&h,&d,&c,&n);
    if(x>=20&&x<=23)
    {
        a=(int)h/n;
        g=h/n;
        if(a!=g)
            {a=a+1;}
        s=(a*c)-((a*c)*(k/l));
         printf("%.4lf\n",s);
    }
    else
    {
        p=(x*60)+y;
        q=h+(1200-p)*d;
        a=(int)q/n;
        j=q/n;
        if(a!=j)
        {
            a=a+1;
        }
        b=(int)h/n;
        g=h/n;
        if(b!=g)
        {
            b=b+1;
        }
        r=(a*c)-((a*c)*(k/l));
        m=(b*c);
        if(r<m)
            printf("%.4lf\n",r);
        else
             printf("%.4lf\n",m);
    }
    return 0;
}
