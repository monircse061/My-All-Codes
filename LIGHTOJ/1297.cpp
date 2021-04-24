#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l,w,x,volume;
    int j=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&l,&w);
        x=((l+w)-sqrt((l+w)*(l+w)-(3*l*w)))/6;
        volume=x*(l-2*x)*(w-2*x);
        j++;
        printf("Case %d: %f\n",j,volume);
    }
    return 0;
}
