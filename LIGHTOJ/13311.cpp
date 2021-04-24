#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v1,v2,v3,v4,a1,a2,x,n,t1,t2,s1,s2;
    int i=0,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        t1=(v1/a1);
        t2=(v2/a2);
        s1=(v1/2)*t1;
        s2=(v2/2)*t2;
        n=s1+s2;

        if(t1>t2)
        {
            x=t1*v3;
        }
        else if(t1<t2)
        {
            x=t2*v3;
        }
        else
        {
            x=t1*v3;
        }
        i++;
        printf("Case %d: %lf %lf\n",i,n,x);
    }
    return 0;
}
