#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,area,p,t;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&p);
        x=p/(2+sqrt(2));
        area=.5*x*x;
        printf("%.2lf\n",area);
    }
    return 0;
}
