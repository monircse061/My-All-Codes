#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double r1,r2,h,p,R2,TA,ta,result;
    int test,j=0;
    cin>>test;
    while(test--)
    {
        cin>>r1>>r2>>h>>p;
        TA=((pi*h)/3)*(r1*r1+r2*r2+r1*r2);
        R2=r2+(r1-r2)*(p/h);
        ta=((pi*(h-p))/3)*(r1*r1+R2*R2+r1*R2);
        result=TA-ta;
        j++;
        printf("Case %d: %.9lf\n",j,result);
    }
    return 0;
}
