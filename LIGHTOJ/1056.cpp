#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,r,s,theta,x;
    char ch;
    int j=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %c %lf",&a,&ch,&b);
        r=(sqrt(a*a+b*b));
        theta=atan(b/a);
        s=r*theta;
        x=(400)/(2*(a+s));
        j++;
        printf("Case %d: %f %f\n",j,x*a,x*b);
    }
    return 0;
}
