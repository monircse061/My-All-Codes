#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,c,num,d,lo,hi,n,mid,h1,h2,t,j=0;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&x,&y,&c);
        n=min(x,y);
        lo=0.0,hi=n;
        while(lo<=1e-9+hi)
        {
            mid=(lo+hi)/2;
            d=mid;
            h1=sqrt(x*x-d*d);
            h2=sqrt(y*y-d*d);
            num=h1*h2/(h1+h2);
            //cout<<d<<" "<<num<<endl;
            if(abs(num-c)<=1e-9)
            {
                j++;
                printf("Case %.f: %f\n",j,d);
                break;
            }
            else if(c<num+1e-9&&d<=x+1e-9&&d<=y+1e-9)
            {
                lo=mid;
            }
            else
            {
                hi=mid;
            }

        }
    }
    return 0;
}
