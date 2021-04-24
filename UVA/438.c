#define pf printf
#define sf scanf
#include<math.h>
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,a,b,c,d,e,f,g,h,i,s,m,n;
    sf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a=(x1+x2)/2;b=(y1+y2)/2;
    c=sqrt((a-x3)*(a-x3)+(b-y3)*(b-y3));
    d=(x2+x3)/2;e=(y2+y3)/2;
    f=sqrt((d-x1)*(d-x1)+(e-y1)*(e-y1));
    g=(x1+x3)/2;h=(y1+y3)/2;
    i=sqrt((g-x2)*(g-x2)+(h-y2)*(h-y2));
    s=(c+f+i)/2;
    m=s*(s-c)*(s-f)*(s-i);
    n=(4/3)*(sqrt(m));
    pf("%d",n);
    return 0;
}

