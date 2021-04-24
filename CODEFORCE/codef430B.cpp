#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,k,n,a[100009],d,sum,cont=0,x,y,z,sum1;
    scanf("%lf %lf %lf",&r,&k,&n);
    d=abs(r-k);
    for(int i=0; i<n; i++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        sum=sqrt(((0-x)*(0-x))+((0-y)*(0-y)));
        sum1=sum;
        sum-=z;
        sum1+=z;
        if(sum>=d&&sum1<=r)
        {
            cont++;

        }
    }
    printf("%.lf",cont);
    return 0;
}
