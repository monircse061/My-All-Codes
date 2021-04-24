#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,h,area,area1,low,high,mid,a,cont,t,x;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf %lf",&h,&area);
        low=1.0,high=h;
        cont=0.0;x=1;
        while(low<=1e-9+high)
        {
            mid=(low+high)/2.0;
            a=h*h-mid*mid;
            area1=.5*a*mid;
            if(abs(area1-area)<=1e-9)
            {x=0;
                //cout<<mid<<" "<<a<<" "<<h<<endl;
                printf("%.6f %.6f %.6f\n",mid,a,h);
                break;
            }
            else if(area1-area>1e-9)
            {
                low=mid;
            }
            else
            {
                high=mid;
            }
            cont++;
            if(cont==10000)break;
        }
        if(x==1)
            printf("-1\n");
    }
    return 0;
}
