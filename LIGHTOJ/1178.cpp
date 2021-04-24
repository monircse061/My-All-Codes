#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,l,s,ans,h,area;
    int j=0,t;

    scanf("%d ",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(b+d+(a-c))/2;
        area=sqrt(s*(s-b)*(s-d)*(s-a+c));
        h=(2*area)/(fabs(a-c));
        //cout<<h<<" "<<c;
        ans=(h*(a+c))/2;//(c*h)+(.5*(a-c)*h);
        j++;
        //printf("Case %d: %.10lf\n",j,ans);
         std::cout << std::fixed;
    std::cout << std::setprecision(10);
    std::cout <<"Case "<<j<<": "<<ans<<endl;
    }
    return 0;
}
