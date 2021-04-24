#include<bits/stdc++.h>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double R,n,r,x,t,j=0;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf %lf",&R,&n);
        x=(pi/n);
        //cout<<x;
        r=sin(x)*(R/(1+sin(x)));
        j++;
        printf("Case %.lf: %.10lf\n",j,r);
    }
    return 0;
}
